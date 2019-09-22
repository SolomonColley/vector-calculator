/// <summary>
/// This StringFormatter class formats decimal numbers as strings
/// using user-defined precision.
/// </summary>
/// <see cref="StringFormatter.h"/> for method declarations.
/// Author: Solomon Colley
/// Since: 09/21/2019

#include "StringFormatter.h"

std::string StringFormatter::doubleToString(const double value, const int precision)
{
	auto ss = std::stringstream();

	ss << std::setprecision(precision) << std::fixed << value;

	return ss.str();
} // end doubleToString

