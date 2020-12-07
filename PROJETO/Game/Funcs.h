#pragma once

#define STD_OUTPUT_HANDLE ((DWORD)-11)	//setColor

//#include <windows.h>	//setColor
#include <string>
#include <utility>


void toUpper(std::string& text);

void setColor(int value);

void clrscr(void);

std::pair<int, int> newPair(char line, char column);