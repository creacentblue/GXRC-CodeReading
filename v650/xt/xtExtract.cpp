0043-0114
	run(binId,jobId)
		set isR/C/L
		binPart->load()
		ebox=binBBoxes[row][col]
		xtExtractJob(jobId,ebox,isR,C,L,row,col)
		xtExtractJob.run()

