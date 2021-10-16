0001-0036
	header
0037-0093
	flFlattenCCIjob(ciMain,halo,binId)
		constructor
0094-0101
	~flFlattenCCIjob()
  		deconstructor
0102-0146
	run()
		flNetPinCount.computeCellzFlattenNetTermPin()
		flCellShapesCCI.mergeCellShapes()
		loadValidNetIds()
		buildSkipInstHash()
		startFlatten()
		m_skipInstHash=NULL
0147-0191
	buildSkipInstHash(skipInstance)
		if(!skipInstance.empty())
			create skipInstHash
0192-0231
	startFlatten
		vector<ciIterm> iterms(topCell.termTab.size())
		flattenRcv(Top_CELLID,0/*net offset*/,0,0,oaTransform,iterms,hierInstNameV,FL_LEVEL_TOP)
		
0232-0386
	flattenRcv(...)
		if(trackInst && !instNameVec.empty())
			find stabidx
		set flattenLevel
		//1 build local netIds to global netIds mapTab
		set iterms.LnetId(termTab[i].getNetId)
		vector<netId> l2gNetIdTab(numNets,FL_NETID_FLOAT)
		init l2gNetIdTab as i++
		translateNetId(netTab,netOffset,iterms,flattenLevel,l2gNetIdTab/*out*/)
		//2 flatten
		flattenShapes(cell,oaTrans,12gNetIdTab,flattenLevel)
		if(TOP_CELLID or FL_LEVEL_SKIP_CELL or isSkipInstance){
			flattenPinShapes(isTopCell,cell,oaTrans,iterms,termOffset,pinIdOffset,isSkipInstance)
		if(isSkipCell)
			m_stopCellSet.insert(cell.Name)
			return true
		else if (isSkipInst)
			return true
		//3 DFS
		set XXoffset = offset + cell.XXTab.size()
		for(cell.instTab,i)
			$!
		return true
0387-0494
	flattenShapes(...)
		for(cell.shapeTab,shape)
			shape.get(shpBBox)
			shpBBox.trans
			shpBBox.halfnode
			if(shpBBox.isOutOfHaloBBox)
				continue
			if(isSiliconMarKerLayer)
				$@storeSiliconMarker(maskNum,shpBBox)
				continue
			if(layerId<0)
				continue
			gNetId=l2gNetIdTab[shape.getNetId]
			shape.getTrapz().trans(oaTrans,trapzV/*out*/)
			trapzV.halfnode
			for(trapzV,trapz)
				if(trapz.isOverlappedWithHaloBBox)
					continue
				qShape(trapz,gNetId,...)
				m_bin->pushShapeRec(qShape)
		return true
0495-0508
	isOverlappedWithHaloBBox(geTrapz)
0509-0643
	
0644-0753
	
0754-0763
	
0764-0798
	translateNetId()
		l2gNetIdTab[i]+=netIdOffset //local->global
		for(iterms.size,i) && if gUpper&localNetId != -1
			gUpperNetId=iterms[i].UnetId()
			localNetId=iterms[i].LnetId()
			l2gNetIdTab[localNetId]=gUpperNetId
0799-0820
	
0821-0832

0833-0862
	loadValidNetIds()
		open gex/ValidNetIds file
		stores in m_validNetIds
0863-0875
	
0876-0898
	
0899-0931
	
0932-0954
	
0955-0992
	debug mode
