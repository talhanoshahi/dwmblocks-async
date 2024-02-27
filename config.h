#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER " | "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 1

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(cmd, interval, signal).
#define BLOCKS(X)         \
    X("~/.local/bin/statusbar/sb_language",	0,  5) \
	X("~/.local/bin/statusbar/sb_used_memory",	1,  14) \
	X("~/.local/bin/statusbar/sb_nettraf",	1,  16) \
	X("~/.local/bin/statusbar/sb_brightness",	0,  2) \
	X("~/.local/bin/statusbar/sb_volume",	0,  10) \
	X("~/.local/bin/statusbar/sb_internet",	5,  4) \
	X("~/.local/bin/statusbar/sb_battery/sb_battery",	5,  3) \
	X("~/.local/bin/statusbar/sb_power",	0, 12) \
	X("~/.local/bin/statusbar/sb_clock/sb_clock",	60, 1)
#endif  // CONFIG_H
