/// <summary>
/// This class represents a single 3D vector. A 3D vector can be
/// set, gotten, and printed to the console using user-defined
/// precision.
/// <remarks>
/// Contains functions that overload the arithmetic operators +,
/// -, *, and /. This simplifies 3D vector arithmetic.
/// </remarks>
/// </summary>
/// See <see cref="Vector3D.cpp"/> for function definitions.
/// Author: Solomon Colley
/// Since: 09/13/2019

#pragma once

#include <iomanip>
#include <sstream>
#include <string>
#include <typeinfo>
#include "OperationException.h"

class Vector3D
{
public:
	/// <summary>
	/// The default constructor. Sets the vector to default values.
	/// </summary>
	Vector3D();

	/// <summary>
	/// A parameterized constructor. Sets the vector to the
	/// parameter values.
	/// </summary>
	/// <param name="x">the 3D vector's x-value</param>
	/// <param name="y">the 3D vector's y-value</param>
	/// <param name="z">the 3D vector's z-value</param>
	Vector3D(const double x, const double y, const double z);

	/// <summary>
	/// The destructor. Frees allocated memory.
	/// </summary>
	~Vector3D();

	/// <summary>
	/// Sets this 3D vector's x-, and y-, and z-values using
	/// the parameter values.
	/// </summary>
	/// <param name="x">the 3D vector's x-value</param>
	/// <param name="y">the 3D vector's y-value</param>
	/// <param name="z">the 3D vector's z-value</param>
	void setVector(const double x, const double y, const double z);

	/// <summary>
	/// Gets this 3D vector's x-value.
	/// </summary>
	/// <returns>this 3D vector's x-value</returns>
	const double getX();

	/// <summary>
	/// Gets this 3D vector's y-value.
	/// </summary>
	/// <returns>this 3D vector's y-value</returns>
	const double getY();

	/// <summary>
	/// Gets this 3D vector's z-value.
	/// </summary>
	/// <returns>this 3D vector's z-value</returns>
	const double getZ();

	/// <summary>
	/// Formats this 3D vector as a string object without using
	/// decimal precision.
	/// </summary>
	/// <returns>this 3D vector as a formatted string</returns>
	const std::string toString();

	/// <summary>
	/// Using user-defined precision, formats this 3D vector as
	/// a string object.
	/// </summary>
	/// <param name="precision">user-defined decimal precision</param>
	/// <returns>this 3D vector as a formatted string</returns>
	const std::string toString(const int precision);

	/// <summary>
	/// Operator + overloader that computes the sum of 2 2D vectors.
	/// </summary>
	/// <param name="v">a 2D vector</param>
	/// <returns>the sum of 2 2D vectors</returns>
	const Vector3D operator+(const Vector3D& v);

	/// <summary>
	/// Operator - overloader that computes the difference of 2 3D vectors.
	/// </summary>
	/// <param name="v">a 3D vector</param>
	/// <returns>the difference of 2 3D vectors</returns>
	const Vector3D operator-(const Vector3D& v);

	/// <summary>
	/// Operator * overloader that computes the product of 2 3D vectors.
	/// </summary>
	/// <param name="v">a 3D vector</param>
	/// <returns>the product of 2 3D vectors</returns>
	const Vector3D operator*(const Vector3D& v);

	/// <summary>
	/// Operator / overloader that computes the quotient of 2 3D vectors.
	/// </summary>
	/// <param name="v">a 3D vector</param>
	/// <returns>the product of 2 3D vectors</returns>
	const Vector3D operator/(const Vector3D& v) const throw (OperationException);
private:
	double x, y, z; // x-, y-, and z-values of the 3D vector
}; // end Vector3D

