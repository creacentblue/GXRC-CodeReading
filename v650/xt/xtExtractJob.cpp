0001-0059
	header
0060-0129
	xtExtractJob(...)
		inital values
		$!set tile boundary edges
		set some flags
0130-0165
	destructor
0166-0198
	releaseMem
0199-0267
	run
		job and process stuff
		read in pre-computed data from CMA
		buildRLCnetworks()
		saveNetwork()
		saveShapeHolderVV()
		if(row==0&&col==0&&is3DSolverFlow==1)
			adjustShapesForCap(adjustShapeDataTab)
			writeSolverDataFile(adjustShapeDataTab)
0268-0341
	buildRLCnetworks
		computeMetalDensity()
		buildGlobalNetIdTab()
		vector<geOutTHrec> shapeTouchedV
		buildSBconn(shapeTouchedV/*out*/)/*SB=ScanBand*/
		markWireShpNeighbor(shapeTouchedV)
		buildSIBoxs()
		if(CCI_FLOW)
			loadSiliconMarkers()
		loadHasTrapzShapeTab()
		new SIwidth()
		markGateExtension(shapeTouchedV)
		createNetworks(shapeTouchedV)
		if(isC&&isDebugNet)
			vector<pair<int,int>> envShpidV
			collectEnvShapes(envShpIdV)
			vector<geOutTHrec> envshapeTouchedV
			collectEnvShapeTouch(shapeTouchedV,envShpIdV,envshapeTouchedV)
			createEnvShapeNetworks(envshapeTouchedV)
		return 

0342-0460
	createNetworks(vector<geOutTHrec> shapeTouchedV)
		if(isC)
			buildCondBin()
			$@
		for(shapeTouchedV.size(),i)
			$@

			

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
0516-0621
	buildSBconn(shapeTouchedV)
		buildLayerShapeEndIdx()
		buildPinIdHolderVV()
		buildProbeNodeIdHolder()
		buildConnectivitySB(pinIdHolderVV,probeNodeIdHolderVV,shapeTouchedV)
		sort(shapeTouchedV)
		splitColorsByDeletingShorts(shapeTouchedV)
		convertColor2NetId(shapeTouchedV)
		$@
0622-0796
	buildConnectivitySB(pinIdHolderVV,probeNodeIdHolderVV,shapeTouchedV)
		for(samePlaneKdtreeIdVV,i)
			vector<int> splKdTreeIds(samePlaneKdtreeIdVV[i])
			for(splKdTreeIds,i0)
				shapeHolderV=m_shapeHolderVV[splKdTreeIds[i0]]
				for(shapeHolderV,i1)
					shp=shapeHolderV[i1]
					if(shp.isTrapz45())
						$@
					else
						idBoxed.push_back(geIdBox(beginId+i1,shp.getBBox))
			//for above via layer shapes
			for(aboveMaskNumV,i1)
				kdtreeId=mskNum2kdtreeId(aboveMaskNumV[i1])
				for(shapeHolderV,i0)
					shp=shapeHolderV[i0]
					if(isIgnoredShapeForConn(kdtreeId,shp)
						continue
					idBoxes.push_back(geIdBox(beginId+i0,shp.getBBox))
			//for below layer same as above
                        for(belowMaskNumV,i1)
                                kdtreeId=mskNum2kdtreeId(belowMaskNumV[i1])
                                for(shapeHolderV,i0)
                                        shp=shapeHolderV[i0]
                                        if(isIgnoredShapeForConn(kdtreeId,shp)
                                                continue
                                        idBoxes.push_back(geIdBox(beginId+i0,shp.getBBox))
			for(splKdTreeIds.size(),i0)
				//pins and instPin shapes on this layer
				$@
				//probe nodes on this layer
				$@
			if (idBoxes.size()==0)
				continue
			geScanBand sb
			sb.add(idBoxes)
			sb.buildTouched()
			shapeTouchedV.insert(sb.shapeTouchedV())
		$@
		return true
3976-4048
	createEnvShapeNetworks(shapeTouchedV)
		for (shapeTouchedV,i)
			netId=shapeTouchedV[i].getNetId()
			if(netId!=preNetId)//preNetid is gloabalNetId
				end=i
				localNetId=global2LocalNetId(preNetId)
				net=m_netTabT[localNetId]
				buildOneRLCnetwork(shapeTouchedV,net,begin,end,prevNetId)
				begin=end
			preNetId=netId
		return true
#finished
