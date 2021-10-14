0039-0233
	rrMpFlow(argc,argv)
		rrDbReadCommandFile(cmdFile)
		rrMpIntergrityChk()
		if(isSMCflow)
			$@rrMpSMCflow(argc,argv)
			return
		if(GTF)
			rrDbReadGtf2D()
		else if(ITF)
			rrDbReadItf()
		if(OA_FLOW)
			rrDbCreateLibOA()
		else
			rrDbOpenDesignCCI()
		rrDbReadLayerMap()
		rrDbPrepGEXdata()
		mpMain.run()
		print some message
