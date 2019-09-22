/// <summary>
/// This Dimension class represents a the dimension calculations
/// are being made in (e.g. one, two, or three dimensions).
/// </summary>
/// <see cref="Dimension.cpp"/> for function definitions.
/// Author: Solomon Colley
/// Since: 09/21/2019

#pragma once

class Dimension
{
public:
	/// <summary>
	/// Sets a value that represents dimension.
	/// </summary>
	/// <param name="d">the dimension</param>
	static void setDimension(const int d);

	/// <summary>
	/// Gets the current dimension.
	/// </summary>
	/// <returns>the current dimension</returns>
	static int getDimension();
private:
	static int dimension;
}; // end Dimension

