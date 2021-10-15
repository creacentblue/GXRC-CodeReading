0043-0125
	run()
		binPart->load()
		binPart->getNumBin()
		addJobs(numBin)
		if(numBin==1||numProc==1)
			sequentialRun()
		else
			distributedRun()
0126-0224
	addJobs()
		mppMain->addJob()
			mpFlattenJob
			mpCompMetAreaJob
			mpExtractJob
			mpStitchJob
			mpOutputJob
		if(cmd->getExtractType=FSCOMPARE)
			mpp->addJob()
				mpFScomparePrepare(cmd,parentCmd)
				mpFScompare(cmd)
				mpFScompareReport(cmd,...)

0225-0264
	sequentialRun()
		output some process threads bins jobs info
		mpp->start() //run jobs
		
