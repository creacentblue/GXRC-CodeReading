0001-0049
	headers
0050-0229
	main(argc,argv)
		set license
		choose cmd_mode:tcl or cmd
		some output info
		run mppMain
		delete .gex
		set OaDepCdsBinPath
		finally run tcl or cmd
			cmd: run rrMpFlow(argc,argv)
			$@tcl:
0594-0617
	setGexOptions(cmdFile,isMaster)
		set logPath,rptPath and create the dirs
