0112-0180
	dumpUnmergedShapes(row,col)
		fileName=gexpath/xtQshapes
		read file data
		write date into gexpath/xtQshapes_rx_dx.rpt
			print head
			print Shapes
0198-0318
	printOneShape()
		outPut netId,type;maskNum
		if(shape.isRect)
			output l,b,r,t
		else
			output all points(x,y)
		if(shpe.Type==XT_CUT)
			output cutW,cutH,cutNumR,cutNumC,cutSpaceW,cutSpaceH

	
