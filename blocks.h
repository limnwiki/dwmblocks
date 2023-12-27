//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"|", "", 0 ,0},
    {"💽 ", "diskusage", 60, 0},
	{"📲 ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 5, 0},
	{"📅 ", "date '+%b %d (%a)'", 5, 0},
	{"🕗 ", "date '+%I:%M:%S%p'", 1, 0},
    {"🌞 ", "daypercent", 10, 0},
    {"🌚 ", "daypercent -r", 10, 0},
    {"🌟", "", 0 ,0},
};

static char delim[] = " ";
static unsigned int delimLen = 5;

