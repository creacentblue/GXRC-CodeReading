0027-0068
	build()
		createNetBuckets()
		buildNetzBinsTab()
		for(m_fpNbkV.size(),i)
			usedNetBucketIdV.push_back(i)
		write usedNetBucketIdV[] into .gex/tile_data/stUsedNetBucketIds
0114-0186
	buildNetzBinsTab()
		read numNets from file .gex/row/col/stBinzNets
		for(numNets,i)
			read pair(netId,uint) form file into netIdOffset
			$@netId=...
			$@saveToNetBin()
0196-0222
	getUsedNetBucketIds(vector<int> usedNetBucketIdV)
		read data form file .gex/stUsedNetBucketIds
