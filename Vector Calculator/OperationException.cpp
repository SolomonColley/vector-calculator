/// <summary>
/// An exception class for specifying logic errors involving
/// mathematical operations.
/// </summary>
/// See <see cref="OperationException.h"/> for function declarations.
/// Author: Solomon Colley
/// Since: 09/08/2019

#include "OperationException.h"

OperationException::OperationException(const std::string & message)
	: std::logic_error(message)
{
} // end parameterized constructor

