0089-0260
	build()
		for(begin,end,i)
			sbBoxId1=m_shapeTouchedV[i].getsMasterId()
			sbBoxId2=m_shapeTouchedV[i].getsSlaveId()
			if(sbBoxId1==sbBoxId2)
				continue
			if(extrJob->isPin(sbBoxId1)||extrJob->isProbeNode(sbBoxId1)
				continue
			sp1=m_extrJob->getShapeFromSBconnBoxId(sbBoxId1)
			sp2=m_extrJob->getShapeFromSBconnBoxId(sbBoxId2)
			createShapeShapeTouchedNodes(sp1,sp2,sbBoxId1,sbBoxId2)
		collectViaTouchedPinWire(viaTouchPinWireTab)
		addViaOvPinNodeToWire(viaTouchPinWireTab)
		if(m_extrJob->isC() || m_extrJob->is3DSolverFlow())
			addNodesForCapAnnotation()
		createNetwork()
		convertEdgezNodeIdxToNodeId()
		trimTileBoundary()
		fuseNodes(contractNodeIdMapTab/*out*/)
		m_saveShapezNodeIds.saveOneNet(m_netId,m_nodeIdxTab,contractNodeIdMapTab)
		shortDevicePins()
		releaseMem()
0261-0268
	isVirtualVia(Qshape sp)
		m_dbtech->isVirtualViaLayer(sp->getMaskNum())

0269-0354
	createShapeShapeTouchedNodes(sp1,sp2,sbBoxId1,sbBoxId2)
		$@
			
