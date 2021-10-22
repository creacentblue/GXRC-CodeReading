0001-0024
	header
0025-0039
	xtCompMetArea()
		constructor
0040-0068
	run(binId)
		bp->load()
		binBBoxes=bp->getBinBBoxVV()
		bp->getBinId2D(binId,row,col)
		ebbox=binBBoxes[row][col]
		xtCompMetAreaJob xtMetJob(jobId,ebbox,row,col)
		xtMetJob.run()

