	value, _ := clear[runtime.GOOS] //runtime.GOOS -> linux, windows, darwin etc.
	//if we defined a clear func for that platform:
	value() //we execute it