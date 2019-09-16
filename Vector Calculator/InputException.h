/// <summary>
/// An exception class for specifying logical errors involving
/// user input.
/// </summary>
/// See <see cref="InputException.cpp"/> for function definitions.
/// Author: Solomon Colley
/// Since: 09/15/2019

#pragma once

#include <stdexcept>
#include <string>

class InputException : public std::logic_error
{
public:
	/// <summary>
	/// A parameterized constructor for throwing input exceptions.
	/// </summary>
	/// <param name="message">a message to instantiate the logic error</param>
	InputException(const std::string& message = "");
}; // end InputException

