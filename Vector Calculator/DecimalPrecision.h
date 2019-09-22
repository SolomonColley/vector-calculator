/// <summary>
/// This DecimalPrecision class provides a static implementation
/// of decimal precision.
/// </summary>
/// See <see cref="DecimalPrecision.cpp"/> for function definitions.
/// Author: Solomon Colley
/// Since: 09/21/2019

#pragma once

class DecimalPrecision
{
public:
	/// <summary>
	/// Sets a value that represents decimal precision.
	/// </summary>
	/// <param name="p">decimal precision</param>
	static void setPrecision(const int p);

	/// <summary>
	/// Gets the current decimal precision.
	/// </summary>
	/// <returns>the current decimal precision</returns>
	static int getPrecision();
private:
	static int precision;
}; // end DecimalPrecision

