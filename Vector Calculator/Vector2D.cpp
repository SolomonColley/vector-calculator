/// <summary>
/// This class represents a single 2D vector. A 2D vector can be
/// set, gotten, and printed to the console using user-defined
/// precision.
/// <remarks>
/// Contains functions that overload the arithmetic operators +,
/// -, *, and /. This simplifies 2D vector arithmetic.
/// </remarks>
/// </summary>
/// See <see cref="Vector2D.h"/> for function declarations.
/// Author: Solomon Colley
/// Since: 09/07/2019

#include "Vector2D.h"

Vector2D::Vector2D()
{
	// initialize a 2D vector with default values
	setVector(0.0, 1.0);
} // end default constructor

Vector2D::Vector2D(const double x, const double y)
{
	setVector(x, y);
} // end parameterized constructor

Vector2D::~Vector2D() { } // end destructor

void Vector2D::setVector(const double x, const double y)
{
	this->x = x;
	this->y = y;
} // end setVector

const double Vector2D::getX()
{
	return x;
} // end getX

const double Vector2D::getY()
{
	return y;
} // end getY

const std::string Vector2D::toString()
{
	auto ss = std::stringstream();

	// format the 2D vector without using decimal precision
	// the format is the following: (x, y)
	ss << "(" << x << ", " << y << ")";

	return ss.str();
} // end toString

const std::string Vector2D::toString(const int precision)
{
	auto ss = std::stringstream();

	// format the 2D vector using user-defined decimal precision
	// the format is the following: (x, y)
	ss << "(" << std::setprecision(precision) << std::fixed
		<< x << ", " << std::setprecision(precision) << std::fixed
		<< y << ")";

	return ss.str();
} // end toString

const Vector2D Vector2D::operator+(const Vector2D& v)
{
	return Vector2D(x + v.x, y + v.y);
} // end overloaded operator +

const Vector2D Vector2D::operator-(const Vector2D& v)
{
	return Vector2D(x - v.x, y - v.y);
} // end overloaded operator -

const Vector2D Vector2D::operator*(const Vector2D& v)
{
	return Vector2D(x * v.x, y * v.y);
} // end overloaded operator *

const Vector2D Vector2D::operator/(const Vector2D& v) const throw (OperationException)
{
	// if any of the denominators are zero, throw an OperationException
	// else compute and return the quotient
	if (v.x == 0.0 || v.y == 0.0)
		throw OperationException("Divide by zero exception caused by "
			+ std::string() + typeid(v).name());
	else
		return Vector2D(x / v.x, y / v.y); // end if-else
} // end overloaded operator /

