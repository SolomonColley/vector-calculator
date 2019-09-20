/// <summary>
/// The Console class provides static methods for clearing and
/// writing strings to text to the console window or screen.
/// </summary>
/// See <see cref="Console.cpp"/> for function definitions.
/// Author: Solomon Colley
/// Since: 09/19/2019

#pragma once

#include <iostream>
#include <cstdlib>
#include <string>

class Console
{
	/// <summary>
	/// Clears the console window or screen.
	/// </summary>
	static void clearScreen();

	/// <summary>
	/// Writes a string of text to the console window or screen.
	/// </summary>
	/// <param name="text">a string of text to be written to the
	/// console window</param>
	static void writeString(const std::string& text);
}; // end Console

