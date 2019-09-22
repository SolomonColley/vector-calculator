/// <summary>
/// This StringFormatter class formats decimal numbers as strings
/// using user-defined precision.
/// </summary>
/// <see cref="StringFormatter.cpp"/> for method definitions.
/// Author: Solomon Colley
/// Since: 09/21/2019

#pragma once

#include <iomanip>
#include <string>
#include <sstream>

class StringFormatter
{
public:
	/// <summary>
	/// Formats a double value as a string using user-defined
	/// precision.
	/// </summary>
	/// <param name="value">a value to be formatted</param>
	/// <param name="precision">the decimal precision</param>
	/// <returns>the formatted value as a string</returns>
	static std::string doubleToString(const double value, const int precision);
}; // end String Formatter

