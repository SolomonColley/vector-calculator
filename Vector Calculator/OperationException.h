/// <summary>
/// An exception class for specifying logic errors involving
/// mathematical operations.
/// </summary>
/// See <see cref="OperationException.cpp"/> for function definitions.
/// Author: Solomon Colley
/// Since: 09/08/2019

#pragma once

#include <stdexcept>
#include <string>

class OperationException : public std::logic_error
{
public:
	/// <summary>
	/// A parameterized constructor for throwing dimension exceptions.
	/// </summary>
	/// <param name="message">A message to instantiate the logic error.</param>
	OperationException(const std::string& message = "");
}; // end OperationException

