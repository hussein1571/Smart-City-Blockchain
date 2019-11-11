PASSWORD="hussein15"
#ADDR="cosmos1fz0vzrc5kawwa343tcu84hcglmcsgj4xcyuzxz"
RECEIVER="cosmos1cjlufmfz03rd6r74jcmdesth3yf268467x8c0q"
VALIDATOR="cosmosvaloper1fz0vzrc5kawwa343tcu84hcglmcsgj4xasgh23"
AMOUNT="1000000stake"
CHAIN="smartcity"
#PROPOSALID="2"
#HOME="~/.sd"

file="/root/go/src/github.com/hussein1571/smartcity/n1.txt"

# sleeping a whole second between each step is a conservative precaution
# check lcd_test/testdata/state.tar.gz -> .gaiad/config/config.toml precommit_timeout = 500ms


sleep 1s

source ~/.bash_profile

clear

echo -n "Do you want to create new node? [y or n]: "

read yno

case $yno in

[yY] | [yY][Ee][Ss] )


echo "Starting new node"

echo Hello, what do you want to name your node?

#read varname
read -p 'node: ' varname



echo what do you want to name your chain-id?

#read varname1
read -p 'chain-id: ' varname1

rm -rf ~/.s*

sleep 1s

sd unsafe-reset-all

sleep 1s

gnome-terminal --geometry=87x20+100+300 -e "bash -c 'node /root/go/src/github.com/hussein1571/smartcity/t/script.js $foo'"

sleep 2s

sd init $varname --chain-id $varname1

sleep 1s

echo ${PASSWORD}| scli keys add jack 

yes|

sleep 1s


sd add-genesis-account $(scli keys show jack -a) 10000000000000000000000token,100000000stake


sleep 1s

scli config chain-id $varname1
scli config output json
scli config indent true
scli config trust-node true

echo ${PASSWORD}| sd gentx --name jack

yes |

#sleep 1s

sd collect-gentxs

#sleep 1s

sd validate-genesis

sleep 2s


gnome-terminal --geometry=87x20 -e "bash -c 'sd start $foo'"  

sleep 40s


#while IFS=: read -r f1 f2 f3 f4; do



n=1
while IFS=" " read -r f1 f2 f3 f4 f5 f6 f7; do
sleep 40s

	if [ -s /root/go/src/github.com/hussein1571/smartcity/n1.txt ]
	then
	echo "File not empty"

	#TIME=`date +"%s"`
	#echo Current Unix epoch time is : $TIME
	echo Co2: $f1
	echo Co: $f2
	echo ph: $f3
	echo turbi: $f4
	echo timestamp: $f5
	echo pays: $f6
	echo region: $f7


	#echo ${PASSWORD}| nscli tx smartcity buy-name $f5 5nametoken --from jack --yes
	#echo time
	sleep 5s

	echo ${PASSWORD}| scli tx smartcity get-info $f5 $f1 $f2 $f3 $f4 $f6 $f7 --from jack --yes

	sleep 8s

	scli query smartcity GiveInfo $f5
	sleep 8s
	((n++))
	
        echo "The number of transaction is:$n"
	
	else 

	echo "File empty"

	fi

done <"$file"

;;

[nN] | [n|N][O|o] )

echo "Starting current node"

sleep 1s

gnome-terminal --geometry=87x20+100+300 -e "bash -c 'node /root/go/src/github.com/hussein1571/smartcity/t/script.js $foo'"


sleep 15s


gnome-terminal --geometry=87x20 -e "bash -c 'sd start $foo'"  

sleep 40s


#while IFS=: read -r f1 f2 f3 f4; do



n=1
while IFS=" " read -r f1 f2 f3 f4 f5 f6 f7; do
sleep 40s

	if [ -s /root/go/src/github.com/hussein1571/smartcity/n1.txt ]
	then
	echo "File not empty"

	#TIME=`date +"%s"`
	#echo Current Unix epoch time is : $TIME
	echo Co2: $f1
	echo Co: $f2
	echo ph: $f3
	echo turbi: $f4
	echo timestamp: $f5
	echo longitude: $f6
	echo latitude: $f7


	#echo ${PASSWORD}| nscli tx smartcity buy-name $f5 --from jack --yes
	
	sleep 5s

	echo ${PASSWORD}| scli tx smartcity get-info $f5 $f1 $f2 $f3 $f4 $f6 $f7 --from jack --yes

	sleep 8s

	#scli query smartcity GiveInfo $f5
	OUTPUT="$(scli query smartcity GiveInfo $f5)"
        echo "the values for this timestamp $f5 is :${OUTPUT}"
	sleep 5s
	OUTPUT1="$(scli query smartcity times)"
	echo "the number of timestamps is :${OUTPUT1}"
	((n++))
	sleep 5s
	echo "The number of transaction is:$n"
	
	else 

	echo "File empty"

	fi

done <"$file"

;;


*) echo "Invalid input"
            ;;
esac


#if [ -t 0 ]; then stty sane; fi

#echo "Thanks for using this script."
#exit 0

#sleep 1s
#echo ${PASSWORD} | ./build/gaiacli tx gov deposit --home ${HOME} --from ${ADDR} --chain-id ${CHAIN} ${PROPOSALID} 1000000000stake --yes

#sleep 1s

#echo ${PASSWORD} | ./build/gaiacli tx gov vote --home ${HOME} --from ${ADDR} --yes --chain-id ${CHAIN} ${PROPOSALID} Yes

#sleep 1s
#HASH=$(echo ${PASSWORD} | ./build/gaiacli tx send --home ${HOME} ${ADDR} ${RECEIVER} ${AMOUNT} --yes --chain-id ${CHAIN} | awk '/txhash.*/{print $2}')
#sed -i.bak -e "s/BCBE20E8D46758B96AE5883B792858296AC06E51435490FBDCAE25A72B3CC76B/${HASH}/g" "${SWAGGER}"

#echo "Replaced dummy with actual transaction hash ${HASH}"

#sleep 1s

#echo ${PASSWORD} | ./build/gaiacli tx staking unbond --home ${HOME} --from ${ADDR} ${VALIDATOR} 100stake --yes --chain-id ${CHAIN}
