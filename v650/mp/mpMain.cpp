0043-0124
	run()
		binPart->load()
		binPart->getNumBin()
		addJobs(numBin)
		if(numBin==1||numProc==1)
			sequentialRun()
		else
			distributedRun()


