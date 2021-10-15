0043-0124
	run()
		binPart->load()
		binPart->getNumBin()
		addJobs(numBin)
		if(numBin==1||numProc==1)
			sequentialRun()
		else
			distributedRun()
0225-0264
	sequentialRun()
		output some process threads bins jobs info
		mpp->start() //run jobs
		
