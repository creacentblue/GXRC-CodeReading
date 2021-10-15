0001-0026
	header and constructor
0027-0073
	computeCellZFlattenNetTermPin()
		getCellTab
		initLegTab //legTab stores each cell's instNum
		updateFlattenNetTermPinRcv(0/*TOPCELLID*/,legTab)
0074-0134
	updateFlattenNetTermPinRcv
		update all cell's NumFlattenXXs as total(including childs)
0135-0176
	initLegTab(legTab)
		for(cellTab.size,iter=legTab[i])
			legTab[i]=cellTab[i].cellInstTab.size()
			cellTab[i].setNumFlattenXX = cellTab[i].getXXTab.size()
				XX=Nets,Terms,Pins,Insts
			cellTab[i].setNumFlattenInsts(1)
#finished
