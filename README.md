# smartcity

Building and running the application
Building the smartcity application
If you want to build the nameservice application in this repo to see the functionalities, Go 1.13.0+ is required .

Add some parameters to environment is necessary if you have never used the go mod before.

mkdir -p $HOME/go/bin

echo "export GOPATH=$HOME/go" >> ~/.bash_profile

echo "export GOBIN=\$GOPATH/bin" >> ~/.bash_profile

echo "export PATH=\$PATH:\$GOBIN" >> ~/.bash_profile

echo "export GO111MODULE=on" >> ~/.bash_profile

source ~/.bash_profile

Now, you can install and run the application.

# Clone the source of the tutorial repository
git clone https://github.com/hussein1571/smartcity.git
cd smartcity
# Install the app into your $GOBIN
make install

# Now you should be able to run the following commands:
sd help
scli help
Running the live network and using the commands
To initialize configuration and a genesis.json file for your application and an account for the transactions, start by running:

NOTE: In the below commands addresses are pulled using terminal utilities. You can also just input the raw strings saved from creating keys, shown below. The commands require jq to be installed on your machine.

NOTE: If you have run the tutorial before, you can start from scratch with a sd unsafe-reset-all or by deleting both of the home folders rm -rf ~/.s*

NOTE: If you have the Cosmos app for ledger and you want to use it, when you create the key with nscli keys add jack just add --ledger at the end. That's all you need. When you sign, jack will be recognized as a Ledger key and will require a device.

# Initialize configuration files and genesis file
  # moniker is the name of your node
sd init <moniker> --chain-id namechain


# Copy the `Address` output here and save it for later use
# [optional] add "--ledger" at the end to use a Ledger Nano S
scli keys add validator


# Add both accounts, with coins to the genesis file
sd add-genesis-account $(scli keys show jack -a) 1000000nametoken,1000000000stake


# Configure your CLI to eliminate need for chain-id flag
scli config chain-id smartcity
scli config output json
scli config indent true
scli config trust-node true

sd gentx --name validator <or your key_name>
After you have generated a genesis transcation, you will have to input the gentx into the genesis file, so that your nameservice chain is aware of the validators. To do so, run:

sd collect-gentxs

and to make sure your genesis file is correct, run:

sd validate-genesis

You can now start sd by calling sd start. You will see logs begin streaming that represent blocks being produced, this will take a couple of seconds.
# start your blockchain 
sd start

You have run your first node successfully.

# First check the accounts to ensure they have funds
scli query account $(scli keys show validator -a)


# Buy your first name using your coins from the genesis file
scli tx smartcity get-info <le nom de capteur> 10nametoken --from validator

# Set the value for the name you just bought
ncli tx smartcity set-info <le nom de capteur> <valeur de capteur> --from validator

# Try out a resolve query against the name you registered
scli query smartcity resolve <le nom de capteur>
# Try out a GiveInfo query against the name you just registered
scli query smartcity GiveInfo <le nom de capteur>
# > {"value":"","owner":"cosmos1l7k5tdt2qam0zecxrx78yuw447ga54dsmtpk2s","price":[{"denom":"nametoken","amount":"10"}]}


# Validator decides to delete the value 
scli tx smartcity delete-info  <le nom de capteur> --from validator

# Try out a GiveInfo query against the name you just deleted
scli query smartcity GiveInfo <le nom de capteur>
# > {"value":"","owner":"","price":[{"denom":"nametoken","amount":"1"}]}


Run second node on another machine (Optional)
Open terminal to run commands against that just created to install sd and scli

#init use another moniker and same namechain
sd init <moniker-2> --chain-id namechain
#overwrite ~/.sd/config/genesis.json with first node's genesis.json
#change persistent_peers
vim /.sd/config/config.toml
persistent_peers = "id@firt_node_ip:26656"
run "scli status" on first node to get id.
#start this second node
sd start
