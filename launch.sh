PASSWORD="hussein15"
#PASSWORD=$varname3
#username=jack
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

echo -n "Do you want to create new node? [y / n / a]: "

read yno

case $yno in

[yY] | [yY][Ee][Ss] )

echo "Starting new node"

echo Hello, what do you want to name your node?

read -p 'node: ' varname

echo what do you want to name your chain-id?

read -p 'chain-id: ' varname1

sleep 4s

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

sd add-genesis-account $(scli keys show jack -a) 100000000000000stake

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

sleep 4s

#gnome-terminal --geometry=87x20 -e "bash -c '/root/Desktop/qt-interface/blockchain-avec-tendermint-master/build-BlockChain-Qt_5_12_5_qt5-Release/BlockChain $foo'" 

n=0
while IFS=" " read -r f1 f2 f3 f4 f5 f6 f7 ; do
sleep 18s

	if [ -s /root/go/src/github.com/hussein1571/smartcity/n1.txt ]
	then
	
	echo "TTN data incomming"
	
	echo Co2: $f1
	echo Co: $f2
	echo ph: $f3
	echo turbi: $f4
	echo timestamp: $f5
	echo pays: $f6
	echo region: $f7
	sleep 2s
	start_time=`date +%s`
	echo ${PASSWORD}|  scli tx smartcity get-info $f5 $f1 $f2 $f3 $f4 $f6 $f7 --from jack --yes
	end_time=`date +%s`
	echo execution time was `expr $end_time - $start_time` s.
	sleep 2s

	scli query smartcity GiveInfo $f5
	sleep 2s

	((n++))
	
        
	echo "The number of transaction is:$n"
	
	
	else if [ -s ! /root/go/src/github.com/hussein1571/smartcity/n1.txt ]
	then

	echo "Waiting for TTN Data"

	fi
	fi


done <"$file"

;;

[nN] | [n|N][O|o] )

echo "Starting current node"

sleep 1s

gnome-terminal --geometry=87x20+100+300 -e "bash -c 'node /root/go/src/github.com/hussein1571/smartcity/t/script.js $foo'"


sleep 6s


gnome-terminal --geometry=87x20 -e "bash -c 'sd start $foo'"  

sleep 4s

#gnome-terminal --geometry=87x20 -e "bash -c '/root/Desktop/qt-interface/blockchain-avec-tendermint-master/build-BlockChain-Qt_5_12_5_qt5-Release/BlockChain $foo'" 


n=0
while IFS=" " read -r f1 f2 f3 f4 f5 f6 f7; do
sleep 16s
       
	if [ -f "root/go/src/github.com/hussein1571/smartcity/n1.txt" ]
	then
	echo "waiting for TTN DATA"

	else 
	sleep 1s
	
	echo "New TTN data incomming "

	sleep 1s
	echo Co2: $f1
	echo Co: $f2
	echo ph: $f3
	echo turbi: $f4
	echo timestamp: $f5
	echo Pays: $f6
	echo region: $f7

	date -d "UTC 1970-01-01 $f5 secs"
	sleep 2s
	start_time=`date +%s`
	echo ${PASSWORD}|  scli tx smartcity get-info $f5 $f1 $f2 $f3 $f4 $f6 $f7 --from jack --yes

	end_time=`date +%s`
	echo execution time was `expr $end_time - $start_time` s.
	((n++))
	
	sleep 4s
	
	echo "The number of transactions is:$n"
	
	fi
        

done <"$file"

;;
[aA] | [a|A][A|a] )

n=0

while IFS=" " read -r f1 f2 f3 f4 f5 f6 f7; do
sleep 4s

	if [ -s /root/go/src/github.com/hussein1571/smartcity/n1.txt ]
	then
	echo "New TTN data incomming "

	echo Co2: $f1
	echo Co: $f2
	echo ph: $f3
	echo turbi: $f4
	echo timestamp: $f5
	echo Pays: $f6
	echo region: $f7

	sleep 5s



	

	#date -ud @$f5
	
	sleep 5s

	echo ${PASSWORD}| scli tx smartcity get-info $f5 $f1 $f2 $f3 $f4 $f6 $f7 --from jack --yes

	sleep 8s

	#scli query smartcity GiveInfo $f5
	#OUTPUT="$(scli query smartcity GiveInfo $f5)"
        #echo "the values for this timestamp $f5 is :${OUTPUT}"
	#sleep 5s
	#OUTPUT1="$(scli query smartcity times)"
	#echo "the number of timestamps is :${OUTPUT1}"
	((n++))
	sleep 1s
	echo "The number of transactions is:$n"
	
	else 

	echo "waiting for TTN DATA"

	fi

done <"$file"
;;


*) echo "Invalid input"
            ;;
esac





