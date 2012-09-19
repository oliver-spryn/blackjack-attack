#include <iostream>
#include <string>
#include <windows.h>

#include "Config.h"
#include "Display.h"

using std::cout;
using std::string;

Display::Display(void) {
	//Stuff
}

void Display::coloredText(string text, int color) {
	Display::setTextColor(color);
	cout << text;
	Display::resetTextColor();
}

void Display::resetTextColor() {
	Display::setTextColor(Config::DEFAULT_CONSOLE_COLOR);
}

void Display::setTextColor(int color) {
	HANDLE cHandle;
	cHandle = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(cHandle, color);
}