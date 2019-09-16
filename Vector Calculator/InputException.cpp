#include "InputException.h"

InputException::InputException(const std::string& message)
	: std::logic_error(message)
{
} // end parameterized constructor

