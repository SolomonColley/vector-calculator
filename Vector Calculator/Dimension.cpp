/// <summary>
/// This Dimension class represents a the dimension calculations
/// are being made in (e.g. one, two, or three dimensions).
/// </summary>
/// <see cref="Dimension.h"/> for function declarations.
/// Author: Solomon Colley
/// Since: 09/21/2019

#include "Dimension.h"

// default to 2nd dimension
int Dimension::dimension = 2;

void Dimension::setDimension(const int d)
{
	dimension = d;
} // end setDimension

int Dimension::getDimension()
{
	return dimension;
} // end getDimension

