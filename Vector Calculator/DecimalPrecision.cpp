/// <summary>
/// This DecimalPrecision class provides a static implementation
/// of decimal precision.
/// </summary>
/// See <see cref="DecimalPrecision.h"/> for function declarations.
/// Author: Solomon Colley
/// Since: 09/21/2019

#include "DecimalPrecision.h"

// default to 4 decimal places
int DecimalPrecision::precision = 4;

void DecimalPrecision::setPrecision(const int p)
{
	precision = p;
} // end setPrecision

int DecimalPrecision::getPrecision()
{
	return precision;
} // end getPrecision

