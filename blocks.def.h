static const Block blocks[] = {
	/*Icon*/	        /*Command*/	 	                 /*Update Interval*/  /*Update Signal*/
        {"   ", "/home/diego/Scripts/dwmblocks/kernel",		360,		            2},
	{" 祥 ", "/home/diego/Scripts/dwmblocks/uptime",	        60,		            2},
	{" ﬙ ",  "/home/diego/Scripts/dwmblocks/memory",	        6,		            1},
	{" 﨎 ", "/home/diego/Scripts/dwmblocks/temp",  	        6,		            3},
	{"",     "/home/diego/Scripts/dwmblocks/volume",		0,		            10},
	{"  ",  "/home/diego/Scripts/dwmblocks/clock",	    		5,		            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
