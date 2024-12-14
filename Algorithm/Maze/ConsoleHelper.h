#pragma once
#include <Windows.h>
#include "Types.h"

enum class CONSOLE_COLOR
{
	BLACK		= 0,
	RED			= FOREGROUND_RED,
	GREEN		= FOREGROUND_GREEN,
	BLUE		= FOREGROUND_BLUE,
	YELLOW		= RED | GREEN,
	WHITE		= RED | GREEN | BLUE,
};

class ConsoleHelper
{
public:
	static void SetCursorPosition(const int32 x, const int32 y);
	static void SetCursorColor(CONSOLE_COLOR color);
	static void ShowConsoleCursor(const bool flag);
};

