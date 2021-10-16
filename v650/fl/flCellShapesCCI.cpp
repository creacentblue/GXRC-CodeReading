0035-0057
	flCellShapeCCI(haloBBox)
		get initialed: detech,cimain,dbu...
0058-0063
	~flCellShapeCCI()
		destructor
0064-0100
	mergeCellShapes()
		travRcv(TOP_CELLID,oaTransform)
0101-0151
	travRcv(cellId,oaTransform)
		if(cell.isFlattened)
			return
		if(cell.isSkipCell)
			flattenOneSkipCell(cellId)
			cell.setFlattened()
		for(cell.getInstTab,i)
			inst[i].transform
			get instBBox(cellTab[inst[i].getCellId].getBBox)
			instBBox.transform
			instBBox.halfNodeScale
			if(!instBBox.overlaps(haloBBox))
				continue //skip
			travRcv(inst[i].getCellId(),oaTransform)
0152-0208
	flattenOneSkipCell(skipCellId)
		vector<ciIterm> iterms(skipCell.TermTab.size())
		flattenRcv(skipCellId,0,0,0,oaTransform,iterms)
		mergeShapesByNet(tmp)
		skipCell.ShapeTab.swap(tmp)
0417-0459
	mergeShapesByNet(tmp)
		for(m_skipCellShapeHolderV.size(),i)
			$!
