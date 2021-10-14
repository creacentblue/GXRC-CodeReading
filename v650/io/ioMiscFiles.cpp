0049-0198
	load()
		open file(.gex/designInfo)
		load data(designName,dbu,temperature,gex_cmd_file,...) form file
		set default netlist name(designName+.spef/dspf) to dbCmmands

	
