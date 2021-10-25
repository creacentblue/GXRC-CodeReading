0039-
	run()
		vector<stStitchNode> stNodeTab
		readNetStNodes(stNodeTab/*out*/)
		interBinNetIdPropagation(stNodeTab/*in*/)
		stNetBins netzbins(netMappingTab,maxNumNetsInOneBukt)
		netzbins.build()
		netzbins.getUsedNetBucketIds(usedNetBucketIdV/*out*/)
		new stCoupCaps()
		stCoupCaps->splitCoupCaps()
		for(numUsedNetBucketIds,i)
			stStitchJob stjob
			stjob.setCoupCaps(coupCaps)
			stjob.run(usedNetBucketIdV[i])
		stCoupCaps->stitchCcap()
		if(extractType==FSCOMPARE)
			stNetIdMappingTab::save(netMappingTab)
		
