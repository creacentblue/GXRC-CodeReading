0000-0017
	header
0018-0032
	dbBinPart()
		init dbBinPart as 0

0070-0079
	getBinId2D(binId,row//out,col//out)

0148-0239
	load(string filename)
		open file(.gex/partitioninfo);
		load data(dbu,topBBox,numRow,numCol,binBBoxVV) from file
		set tileW,tileH,isInit

0082-0147
	save()
		reverse operation as load()

0331-0343
	getBinBBox(binId)
		

    
