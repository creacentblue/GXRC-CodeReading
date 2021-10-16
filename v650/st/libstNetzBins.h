0001-0020
	header
0021-0054
	stNetzBins
		stNetIdMappingTab
		vector<FILE*> fpNbkV//net buckets
		FILE* fpUnKn//Unknown net, netId < 0
		maxNetId
		maxNumNetsInOneBucket
		numNetBucket//	totalNets / maxNumNetsInOneBucket + 1

