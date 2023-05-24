#pragma once

#define US_TO_NT_MULTIPLIER (CORE_CLOCK / 1000000)

// todo: huh? is this universal?
typedef enum {
	BOR_Level_None = 0,
	BOR_Level_1 = 1,
	BOR_Level_2 = 2,
	BOR_Level_3 = 3
} BOR_Level_t;

#define PORT_SIZE 16
