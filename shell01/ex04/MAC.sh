ifconfig -a link | grep -o 'ether .*' | cut -c7- | rev | cut -c2-| rev 
