/// <summary>
/// This class represents a single 3D vector. A 3D vector can be
/// set, gotten, and printed to the console using user-defined
/// precision.
/// <remarks>
/// Contains functions that overload the arithmetic operators +,
/// -, *, and /. This simplifies 3D vector arithmetic.
/// </remarks>
/// </summary>
/// See <see cref="Vector3D.h"/> for function declarations.
/// Author: Solomon Colley
/// Since: 09/13/2019

#include "Vector3D.h"

Vector3D::Vector3D()
{
	// initialize a 3D vector with default values
	setVector(0.0, 1.0, 2.0);
} // end default constructor

Vector3D::Vector3D(const double x, const double y, const double z)
{
	setVector(x, y, z);
} // end parameterized constructor

Vector3D::~Vector3D() { } // end destructor

void Vector3D::setVector(const double x, const double y, const double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
} // end setVector

const double Vector3D::getX()
{
	return x;
} // end getX

const double Vector3D::getY()
{
	return y;
} // end getY

const double Vector3D::getZ()
{
	return z;
} // end getZ

const std::string Vector3D::toString()
{
	auto ss = std::stringstream();

	// format the 3D vector without using decimal precision
	// the format is the following: (x, y, z)
	ss << "(" << x << ", " << y << ", " << z << ")";

	return ss.str();
} // end toString

const std::string Vector3D::toString(const int precision)
{
	auto ss = std::stringstream();

	// format the 3D vector using user-defined decimal precision
	// the format is the following: (x, y, z)
	ss << "(" << std::setprecision(precision) << std::fixed
		<< x << ", " << std::setprecision(precision) << std::fixed
		<< y << ", " << std::setprecision(precision) << std::fixed
		<< z << ")";

	return ss.str();
} // end toString

const Vector3D Vector3D::operator+(const Vector3D& v)
{
	return Vector3D(x + v.x, y + v.y, z + v.z);
} // end overloaded operator +

const Vector3D Vector3D::operator-(const Vector3D& v)
{
	return Vector3D(x - v.x, y - v.y, z - v.z);
} // end overloaded operator -

const Vector3D Vector3D::operator*(const Vector3D& v)
{
	return Vector3D(x * v.x, y * v.y, z * v.z);
} // end overloaded operator *

const Vector3D Vector3D::operator/(const Vector3D& v) const throw(OperationException)
{
	// if any of the denominators are zero, throw an OperationException
	// else compute and return the quotient
	if (v.x == 0.0 || v.y == 0.0 || v.z == 0.0)
		throw OperationException("Divide by zero exception caused by "
			+ std::string() + typeid(v).name());
	else
		return Vector3D(x / v.x, y / v.y, z / v.z); // end if-else
} // end overloaded operator /

