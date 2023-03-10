#include "options.hpp"

const char* const KeyNames[] = {
	"None",
	"LButton",
	"RButton",
	"Cancel",
	"MButton",
	"X1Button",
	"X2Button",
	"None",
	"BackSpace",
	"Tab",
	"None",
	"None",
	"Clear",
	"Enter",
	"None",
	"None",
	"Shift",
	"Ctrl",
	"Alt",
	"Pause",
	"Caps Lock",
	"None",
	"None",
	"None",
	"None",
	"None",
	"None",
	"Esc",
	"None",
	"None",
	"None",
	"None",
	"Scace",
	"Page Up",
	"Page Down",
	"End",
	"Home",
	"Left",
	"Up",
	"Right",
	"Down",
	"Select",
	"Print",
	"Execute",
	"Print Screen",
	"Insert",
	"Delete",
	"Help",
	"0",
	"1",
	"2",
	"3",
	"4",
	"5",
	"6",
	"7",
	"8",
	"9",
	"None",
	"None",
	"None",
	"None",
	"None",
	"None",
	"None",
	"A",
	"B",
	"C",
	"D",
	"E",
	"F",
	"G",
	"H",
	"I",
	"J",
	"K",
	"L",
	"M",
	"N",
	"O",
	"P",
	"Q",
	"R",
	"S",
	"T",
	"U",
	"V",
	"W",
	"X",
	"Y",
	"Z",
	"LWin",
	"RWin",
	"Apps",
	"None",
	"Sleep",
	"NumPad 0",
	"NumPad 1",
	"NumPad 2",
	"NumPad 3",
	"NumPad 4",
	"NumPad 5",
	"NumPad 6",
	"NumPad 7",
	"NumPad 8",
	"NumPad 9",
	"Multiply",
	"Add",
	"Separator",
	"Subtract",
	"Decimal",
	"Divide",
	"F1",
	"F2",
	"F3",
	"F4",
	"F5",
	"F6",
	"F7",
	"F8",
	"F9",
	"F10",
	"F11",
	"F12",
	"F13",
	"F14",
	"F15",
	"F16",
	"F17",
	"F18",
	"F19",
	"F20",
	"F21",
	"F22",
	"F23",
	"F24",
	"None",
	"None",
	"None",
	"None",
	"None",
	"None",
	"None",
	"None",
	"NumLock",
	"Scroll",
	"None",
	"None",
	"None",
	"None",
	"None",
	"None",
	"None",
	"None",
	"None",
	"None",
	"None",
	"None",
	"None",
	"None",
	"LShift",
	"RShift",
	"LCtrl",
	"RCtrl",
	"LAlt",
	"RAlt"
};

Options opt;
bool   g_Unload = false;