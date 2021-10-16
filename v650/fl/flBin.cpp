0343-0397
	pushPinRec(pinRec,pair(uint,int)/*decapIdPair*/)
		isTopLevelPin = pinRec.isTopLevelPin
		nid=isTopLevelPin ? pinRec.LnetId : pinRec.UnetId
		isTopLevelNet=(nid==FL_NETID_FLOAT)?false:true
		insertNetRec(nid,isTopLevelNet)
		m_pinBuf.push_back(pinRec)
		if(pair.second!=-1/*decapMasterId*/)
			m_pin2decapIdBuf.push_back(tuple(pinRec.getId(),decapIdPair.first,second))
0398-0455
	pushShapeRec(Qshape)
		insertNetRec(nid,isTopLevelNet)
		m_shapeBuf.push_back(shape)
0456-0481
	insertNetRec(nid,isTopLevelNet)
		m_netRecMap.insert(pair(nid,nrec/*flNetRec*/))
