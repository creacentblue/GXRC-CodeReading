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
0232-0386
	flattenRcv
0387-0494
	flattenShapes
0495-0508
	isOverlappedWithHaloBBox(geTrapz)
0509-0643
	
0644-0753
	
0754-0763
	
0764-0798
	
0799-0820
	
0821-0832

0833-0862
	
0863-0875
	
0876-0898
	
0899-0931
	
0932-0954
	
0955-0992
	debug mode
