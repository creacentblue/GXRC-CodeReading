0050-0210
	run()
		// 1.prepare file and data
		bp->load()
		initOpenFileBinV()
		getNumTopPins()
		fpi = fopen(".gex/tile_data/stNetzBins")
		vec<pair<netId,binId>> netzBinsTab
		read fpi to netzBinsTab
		sort(netzBinsTab)
		fpi = fopen(".gex/tile_data/stNotPairedNodezEdges")
		read fpi to notPairedEdgeV
		//fopen all kinds of files and hold the file handle
		reapetPinFp = fopen(...)
		...
		m_saveDecap.fileOpen(bucketId)
		m_coupCaps->freadSplotCoupCaps(bucketId)
		// 2. start stitch
		int begin=end=0
		preNetId=netzBinsTab[0].first
		for(netzBinsTab,i)
			netId=netzBinsTab[i].first
			if(preNetId!=netId)
				end=i
				if(stitchOneNet(preNetId,netzBinsTab,begin,end))
					m_numNets++
				begin=end
				preNetId=netId
		// 3. write data into files
		m_coupCaps->writeBcakUpdates(m_bucketId)
		...
		return true

0230-0285
	stitchOneNet(netId,netzBinsTab,begin,end)
		numBins=end-begin
		if(numBins==1)
			openRequiredFiles(binId)
			getNetzOffsetsInNetwork(binId,netId,RLCnetworkOffsetV/*out*/)
			copyToBucketRLCnetworkFile(binId,netId,RLCnetworkOffsetV,progNodeTab)
		else if(numBins < m_numBinsNetCrossedStitchInMem)
			stitchInMem(...)
		else
			stitchUseTmpFiles(...)
		m_coupCaps->setNodeIdMappingTab()
		sort...
		update...
0286-0347
	openRequiredFiles()
		if(m_RLCntkFpV[binId]==NULL)
			read stBinzNets in mem
			open RLCnetwork in m_RLCntkFpV[binId]
		if(m_shapezNodeIdFpV[binId]==NULL)
			open xtShapezNodeIds in m_shapezNodeIdFpV[binId]
			read xtShapezNodeIdsOffset in mem
0390-0430
	getNetzOffsetsInNetwork()
		pair key(netId,0)
		$@
0431-0557
	copyToBucketRLCnetworkFile()
		$#

1166-1209
	checkOneNetConnectibity(netId,nodeTab,edgeTab)
		if(connChk.isEconnected(dumpFloatingPin/*out*/))
			m_numEconnected++
		else
			m_brokenNetV.push_back(netId)
		deleteFloatingNetwork(dumpFloatingPin)
1210-1261
	deleteFloatingNetwork
		for(nodeTab,it)
			if(it->isFloating)
				m_floatNodeNum++
				m_deleteFloatingNodeIdMapTab[i] = UINT_MAX //record the node to del
			else
				m_deleteFloatingNodeIdMapTab[i] = newNodeId
				newNodeId++
			i++
		nodeTab.erase()//delete the floating nodes
		if(m_floatNodeNum)
			for(edgeTab,it1)
				if(m_deleteFloatingNodeIdMapTab[it1->getNodeId1()] == UINT_MAX
				|| m_deleteFloatingNodeIdMapTab[it1->getNodeId2()] == UINT_MAX)
					it1->setFloating()
				else
					//do nothing
		
		edgeTab.erase()//delete the floating edges



