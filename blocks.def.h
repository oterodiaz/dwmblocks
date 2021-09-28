static const Block blocks[] = {
    /*Icon*/            /*Command*/                          /*Update Interval*/  /*Update Signal*/
    /* {" ﲅ ",    "$HOME/.local/bin/ic",    2,    2}, */
    /* {" ﮊ ",    "$HOME/.local/bin/lod",    2,    2}, */
    {"   ",    "$SCRIPTS/statusbar/kernel",    360,    2},
    {" 祥 ",    "$SCRIPTS/statusbar/uptime",    60,    2},
    {" ﬙ ",    "$SCRIPTS/statusbar/memory",    6,    1},
    {" 﨎 ",    "$SCRIPTS/statusbar/temperature",    6,    3},
    {"",    "$SCRIPTS/statusbar/volume_pamixer",    0,    10},
    {" ",    "$SCRIPTS/statusbar/brightness_icon",    0,    11},
    {"  ",    "$SCRIPTS/statusbar/clock",    5,    0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " |";
static unsigned int delimLen = 3;
