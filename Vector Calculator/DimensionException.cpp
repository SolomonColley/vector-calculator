/// <summary>
/// An exception class for specifying logic errors involving
/// dimensions.
/// </summary>
/// See <see cref="DimensionException.h"/> for function declarations.
/// Author: Solomon Colley
/// Since: 09/21/2019

#include "DimensionException.h"

DimensionException::DimensionException(const std::string& message)
	: std::logic_error(message)
{
} // end parameterized constructor

