while [ true ]
do
	curl -s https://price.btcfans.com >out.txt
	sed -i "s/\"main-val text-green\" data-usd=\"/\n/g" out.txt
	sed -i "s/\" data-none-unit=/\n/g" out.txt
	sed -i "s/<\/div><div class=\"point\">/\n/g" out.txt
        sed -i "s/<\/div><div class=\"time\">/\n/g" out.txt
	clear
	echo "当前价格    "`sed -n '2p' out.txt`
	#echo "贪婪指数    "`sed -n '7p' out.txt`
	sleep 1
done
