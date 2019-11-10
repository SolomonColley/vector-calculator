/// <summary>
/// An exception class for specifying logical errors involving
/// user input.
/// </summary>
/// See <see cref="InputException.h"/> for function declarations.
/// Author: Solomon Colley
/// Since: 09/15/2019

#include "InputException.h"

InputException::InputException(const std::string & message)
	: std::logic_error(message)
{
} // end parameterized constructor

