0048-0136
	mpFlattenJob::run()
		get BinPart, binId, halo
		then use (oaDesign/ciMain,binId,halo) to call flFlatten.run() 

0153-0202
	mpCompMetAreaJob::run()
		xtCompMetArea ma
		ma.run()
0264-0315
	mpExtractJob::run()
		get binId
		xtExtract.run(binId)

0401-0449
	mpStitchJob::run()
		stStitch stitch
		stitch.run()

0462-0560
	mpOutputJob::run()
		if(extractType==SOLVER)
			rrIoOutSpice()
		if(DSPF)
			rrIoOutDspf()
		if(SPEF)
			rrIoOutSpef()
		rrIoOutInst()
	
