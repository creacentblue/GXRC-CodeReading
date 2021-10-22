0001-0019
	header
0020-0046
	geIdBox
		int:	idx,visited
		geBox:	bbox
0122-0214
	geOutTHrec
		masterId
		slaveId
		color
		flag4Color
		visited

0290-0398
	geScanBand
		vector<geIdBox> idBoxV
		vector<geEndIdxCoord> endIdxV
		vector<geOutTHrec> touched,neigbors
		vector<uint> groupEndIdxV,shapezBoxIdEndIdxV,boxzShapeIdV
