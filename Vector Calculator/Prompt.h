/// <summary>
/// This class provides functions for prompting users in programs.
/// Users can be prompted to enter primitive datatypes as well as
/// any other datatypes added to the class.
/// </summary>
/// See <see cref="Prompt.cpp"/> for function definitions.
/// Author: Solomon Colley
/// Since: 09/15/2019

#pragma once

#include <iostream>
#include <limits>
#include <string>
#include <vector>
#include "InputException.h"
#include "Vector2D.h"
#include "Vector3D.h"

class Prompt
{
public:
	/// <summary>
	/// Gets an integer from the user.
	/// </summary>
	/// <param name="prompt">a prompt message</param>
	/// <returns>an integer</returns>
	static int getInt(const std::string& prompt);

	/// <summary>
	/// Gets an integer from the user within a range.
	/// </summary>
	/// <param name="prompt">a prompt message</param>
	/// <param name="min">the inclusive minimum value</param>
	/// <param name="max">the exclusive maximum value</param>
	/// <returns>an integer within a range</returns>
	static int getInt(const std::string& prompt, const int min, const int max);

	/// <summary>
	/// Gets a double from the user.
	/// </summary>
	/// <param name="prompt">a prompt message</param>
	/// <returns>a double</returns>
	static double getDouble(const std::string& prompt);

	/// <summary>
	/// Gets a double from the user within a range.
	/// </summary>
	/// <param name="prompt">a prompt message</param>
	/// <param name="min">the inclusive minimum value</param>
	/// <param name="max">the exclusive maximum value</param>
	/// <returns>a double within a range</returns>
	static double getDouble(const std::string& prompt, const double min, const double max);

	/// <summary>
	/// Gets a string from the user.
	/// </summary>
	/// <param name="prompt">a prompt message</param>
	/// <returns>a string</returns>
	static std::string getString(const std::string& prompt);

	/// <summary>
	/// Gets a string from the user that matches one or more conditions.
	/// </summary>
	/// <param name="prompt">a prompt message</param>
	/// <param name="conditions">a set of conditions</param>
	/// <returns>a string that matches one or more conditions</returns>
	static std::string getString(const std::string& prompt, const std::vector<std::string>& conditions);

	/// <summary>
	/// Gets a 2D vector from the user.
	/// </summary>
	/// <param name="prompt">a prompt message</param>
	/// <returns>a 2D vector</returns>
	static Vector2D get2DVector(const std::string& prompt);

	/// <summary>
	/// Gets a 3D vector from the user.
	/// </summary>
	/// <param name="prompt">a prompt message</param>
	/// <returns>a 3D vector</returns>
	static Vector3D get3DVector(const std::string& prompt);
}; // end Prompt

