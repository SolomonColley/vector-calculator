/// <summary>
/// The Console class provides static methods for clearing and
/// writing strings to text to the console window or screen.
/// </summary>
/// See <see cref="Console.h"/> for function declarations.
/// Author: Solomon Colley
/// Since: 09/19/2019

#include "Console.h"

void Console::clear()
{
#ifdef _WIN32 || _WIN64
	system("cls");
#else
	system("clear");
#endif
} // end clearScreen

void Console::write(const std::string& text)
{
	std::cout << text;
} // end writeString

