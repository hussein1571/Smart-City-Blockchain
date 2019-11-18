# Smart City :sparkles:
![banner](./Smart-City.jpg)


Building and running the application
Building the smartcity application
If you want to build the smartcity application in this repo to see the functionalities, Go 1.13.0+ is required .

Add some parameters to environment is necessary if you have never used the go mod before.
re
node.js file you have to run :

npm install (in order to have node_modules )



```mkdir -p $HOME/go/bin
echo "export GOPATH=$HOME/go" >> ~/.bash_profile
echo "export GOBIN=\$GOPATH/bin" >> ~/.bash_profile
echo "export PATH=\$PATH:\$GOBIN" >> ~/.bash_profile
echo "export GO111MODULE=on" >> ~/.bash_profile
source ~/.bash_profile
```
Now, you can install and run the application.
```
# Clone the source of the tutorial repository
git clone https://github.com/hussein1571/smartcity.git
cd smartcity
# Install the app into your $GOBIN
make install

# Now you should be able to run the following commands:
sd help
scli help
```
Running the live network and using the commands
To initialize configuration and a genesis.json file for your application and an account for the transactions, start by running:

NOTE: In the below commands addresses are pulled using terminal utilities. You can also just input the raw strings saved from creating keys, shown below. The commands require jq to be installed on your machine.

NOTE: If you have run the tutorial before, you can start from scratch with a ```sd unsafe-reset-all``` or by deleting both of the home folders ```rm -rf ~/.s*```

NOTE: If you have the Cosmos app for ledger and you want to use it, when you create the key with nscli keys add jack just add --ledger at the end. That's all you need. When you sign, jack will be recognized as a Ledger key and will require a device.
```bash
# Initialize configuration files and genesis file
  # moniker is the name of your node
sd init < moniker> --chain-id smartcity


# Copy the `Address` output here and save it for later use
# [optional] add "--ledger" at the end to use a Ledger Nano S

scli keys add validator


# Add account, with coins to the genesis file

sd add-genesis-account $(scli keys show validator -a) 1000000token,1000000000stake


# Configure your CLI to eliminate need for chain-id flag


scli config chain-id smartcity
scli config output json
scli config indent true
scli config trust-node true


sd gentx --name validator < or your key_name >

After you have generated a genesis transcation, you will have to input the gentx into the genesis file, so that your smartcity chain is aware of the validators. To do so, run:

sd collect-gentxs

and to make sure your genesis file is correct, run:

sd validate-genesis

You can now start sd by calling sd start. You will see logs begin streaming that represent blocks being produced, this will take a couple of seconds.
# start your blockchain 

sd start

****will the blockchain smart city is running, I can go to``` http://localhost:26657/ ```to see all the available endpoints.

```
NOTE: #Comment on peut avoir deux validateurs sur le même blockchain:
``` bash
1) Supprimer .sd et .scli dossiers dans le dossier racine à 2 nœuds.
   ```rm -rf ~/.s*``` 
sd unsafe-reset-all 
2) Et ensuite, sd init --chain-id smartcity < nom de noeud > dans le première nœud, genesis.json a été généré avec le même identifiant de chaîne et différents noms et identifiants de nœuds.
3) Créez un compte  ```scli keys add ------```
4) Envoyez au deuxième noeud le genesis file de la première noeud.
5) Ensuite, ```sd init --chain-id smartcity < nom de noeud >``` dans le deuxième nœud et remplacez sont genesis.go par le genesis.go de la première noeud.
6) créez un compte pour le deuxième noeud en lui donne un solde de stake 
7) lancer le commande ```sd gentxs --name < nom de compte >``` pour générer le fichier de gentxs qui se trouve dans ~/.sd/config/gentx/  et par cette étape on génère le validator 

Note: Il faut jamais collecter le gentxs file pour le mettre dans le fichier genesis.go 

8) Re-envoyez au premier noeud  le deux fichiers gentxs qui se trouve dans le path indiquer sous dessus sous la forme (gentx-..........json)  et genesis.go 
9) Remplacer le fichier genesis.go qui est déjà envoyé dans le ~/.sd/config et ensuite lancer le commande 
```sd gentxs --name < nom de compte >``` pour générer le fichier de gentxs qui se trouve dans ~/.sd/config/gentx/  
 et par cette étape on génère le validator 
10) Après la génération de gentxs dans le premier noeud; ensuite  il faut mettre le fichier gentxs de deuxième noeud dans ~/.sd/config/gentx/  
11) lancer la commande sd collect-gentxs dans le but de collecter les gentxs qui contiennent les validateurs de deux noeuds  .
12) Valider le genesis ```sd validate-genesis```
13) Re-envoyez le genesis.go pour le deuxième noeud 
14) Configurez le persistent peers dans le fichier config.toml dans ~/.sd/config avec le id des noeuds et les adresses IP .
15) Lancer    ```sd start```    dans les deux onglets des machines 
```

You have run your first node successfully.
```bash
# First check the account to ensure they have funds

scli query account $(scli keys show validator -a)


# get your first info from sensor using your coins from the genesis file

scli tx smartcity get-info <le nom de capteur> 10token --from validator

# Set the value for the capteur you just get

scli tx smartcity set-info < le nom de capteur > < valeur de capteur > --from validator

#you can also query a single transaction by its hash using the following command:

scli query tx [hash]

# Try out a resolve query against the info you registered
scli query smartcity resolve < le nom de capteur >

# Try out a GiveInfo query against the info you just registered

scli query smartcity GiveInfo < le nom de capteur >

# > {"value":"","owner":"cosmos1l7k5tdt2qam0zecxrx78yuw447ga54dsmtpk2s","price":[{"denom":"token","amount":"10"}]}


# Validator decides to delete the value 

scli tx smartcity delete-info  < le nom de capteur > --from validator

# Try out a GiveInfo query against the info you just deleted

scli query smartcity GiveInfo < le nom de capteur >

# > {"value":"","owner":"","price":[{"denom":"token","amount":"1"}]}
```
#Send Tokens
```bash
"The following command could be used to send coins from one account to another":

scli tx send [from_key_or_address] [to_address] 1000token --chain-id=<chain_id> --from=<key_name> 
```

#Managing Validators
```bash
#Create a Validator
#find your validator pubkey by running

sd tendermint show-validator

"To create your validator, run the following command:"

scli tx staking create-validator --amount=1000stake --pubkey=$(sd tendermint show-validator) --moniker=“choose a moniker” --chain-id=<chain_id> --commission-rate 0.10 --commission-max-rate 0.20 --commission-max-change-rate 0.01 --min-self-delegation 1  --gas 30000 --gas-prices 0.001stake --from=<key_name>

"Unjail Validator"
scli tx slashing unjail --from=<key_name> --chain-id=<chain_id>
```
#Querying Validators
```bash
"Query account information"
scli query account <yourAccountName>

"Query the list of validators"
scli query staking validators

#Query validator information"
scli query staking validator <validatorAddress>

"Query all delegations for a given delegator"
scli query staking delegations <delegatorAddress>

"Query a specific delegation made from a delegator to a validator"
scli query staking delegation <delegatorAddress> <validatorAddress>

"Query Delegator Rewards"
scli query distribution rewards <delegatorAddress>
```
#Fee Distribution
```bash
"Query Distribution Parameters"
To check the current distribution parameters, run:

scli query distribution params

"Query distribution Community Pool"
To query all coins in the community pool which is under Governance control:

scli query distribution community-pool

"Query outstanding rewards"
To check the current outstanding (un-withdrawn) rewards, run:

scli query distribution validator-outstanding-rewards <validator_address>

"Query Validator Commission"
To check the current outstanding commission for a validator, run:

scli query distribution commission <validator_address>
"Query All Delegator Rewards"
To check all current rewards for a delegation (were they to be withdrawn), run:

scli query distribution rewards <delegator_address>

```
#Bonding and Sending Atoms
```bash
"Bond atoms to a given validator"

scli tx staking delegate <validatorAddress> <amountToBond> --from <delegatorKeyName> --gas auto --gas-prices <gasPrice>
```
> _*EXAMPLE*_:Here's an example of what an actual transaction should look like to be accepted by the network (bonding 3000 atoms in this example):
```bash
scli tx staking delegate cosmosvaloper1ps7dmygt4wm72t8l9kdjetelhggsv8w77mdh33 3000000000uatom --from cosmospool --gas 130000 --gas-prices 0.025uatom --sequence 15 --ledger --chain-id <chain name>

"Withdraw Staking Rewards"
scli tx distribution withdraw-all-rewards --from <delegatorKeyName> --gas auto --gas-prices <gasPrice>

ex value for flag: <gasPrice>=0.001stake
```

# Run second node on another machine (Optional)
Open terminal to run commands against that just created to install sd and scli
```bash
"init use another moniker and same smartcity"
sd init < moniker-2 > --chain-id smartcity
"overwrite ~/.sd/config/genesis.json with first node's genesis.json"

"change persistent_peers"

vim /.sd/config/config.toml
persistent_peers = "id@firt_node_ip:26656"
run "scli status" on first node to get id.
```
#start this second node

sd start
