0472-0515
	buildOneRLCnetwork(shapeTouchedV,net/*xtNetRect*/,begin,end,gNetId)
		if(end<=begin)
			return false
		if(net.isPGnet()&&!cmd.isExtractPowerNet)
			return false
		new xtNetwork(gNetId,shapeTouchedV,begin,end,m_dbu)
		if(network->build())
			net.setNetwork(network)
		return true
