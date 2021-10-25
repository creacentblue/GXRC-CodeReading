0094-0236
	stStitchJob
		bp//binpart
		bucketId
		numNets
		numEconnected
		numTopPins
		maxFileOpened
		numBinsNetCrossedStitchInMem
		saveDecap//ioDecap
		// vector
		brokenNetV
		fileOpenedBinV
		binNetsVV //vec<vec<pair<netid,u64>>>
		// 
		bktNtkFp
		RLCntkFpV
		floatPinsFp
		floatNodeNum
		bktShapezNodeIdFp
		deleteFloatNodeIdMapTab
		shapezNodeIdFpV
		shapezNodeIdsOffsetVV
		notPairedEdgeV
		coupCaps
		repeatPinFp


0327-0398
	stStitchNode
		netId
		maskNum
		x,y
		binId
		viisted
		lStNodeId
		isTopStNode
0545-0575
	stNetIdMapping
		binId,oldNetId,newNetId		
0576-0596
	stNetIdMappingTab
		vector<stNetIdMapping> netMappingV
0597-0653
	stStitch
		maxNumNetsInOneBucket,numBins,numBinRow,numBinCol
		netMappingTab
		vector<pari(netId,BinId)> netzBinsTab
		stCoupCaps
