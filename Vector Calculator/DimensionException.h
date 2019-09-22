/// <summary>
/// An exception class for specifying logic errors involving
/// dimensions.
/// </summary>
/// See <see cref="DimensionException.cpp"/> for function definitions.
/// Author: Solomon Colley
/// Since: 09/21/2019

#pragma once

#include <stdexcept>
#include <string>

class DimensionException : public std::logic_error
{
public:
	/// <summary>
	/// A parameterized constructor for throwing dimension exceptions.
	/// </summary>
	/// <param name="message">a message to instantiate the logic error</param>
	DimensionException(const std::string& message = "");
}; // end DimensionException

