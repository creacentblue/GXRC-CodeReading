0120-0159
	saveRLCnetwork()
		numNet=0
		m_extrJob->getNetTabT()
		m_extrJob->getTTBunKnowNetTabT()
		for(netTab,i)
			if(netTab[i].getNetwork()!=NULL)
				numNet++
		for(ttbUnkownNetTab,i)
			if(ttbUnkownNetTab[i].getNetwork()!=NULL)
				numNet++
		fwrite numNet in m_fp,mfpSt,m_fpBn //RLCnetwork,stNetStchNodes,stBinzNets
		saveNetworks(ttbunKnowNetTab)
		saveNetworks(etTab)
