static const Block blocks[] = {
	/*Icon*/	        /*Command*/	 	                 /*Update Interval*/  /*Update Signal*/
    {"   ", "/home/diego/.scripts/dwmblocks/kernel",		    360,		        2},
	{" 祥 ", "/home/diego/.scripts/dwmblocks/uptime",	        60,		            2},
	{" ﬙ ",  "/home/diego/.scripts/dwmblocks/memory",	        6,		            1},
	{" 﨎 ", "/home/diego/.scripts/dwmblocks/temp",  	        6,		            3},
	{"",     "/home/diego/.scripts/dwmblocks/volume",			0,		            10},
	{"",     "/home/diego/.scripts/dwmblocks/brightness",    	0,		            11},
	{"  ",  "/home/diego/.scripts/dwmblocks/clock",    		5,		            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
