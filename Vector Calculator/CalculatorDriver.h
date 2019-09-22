/// <summary>
/// This CalculatorDriver is a driver for the 2D and 3D vector calculators.
/// Each static method performs a specific calculation involving either
/// one or two 2D or 3D vectors, depending on the calculation. Operation
/// exception handling and dimension exception handling also takes place
/// within this class.
/// </summary>
/// <see cref="CalculatorDriver.cpp"/> for method definitions.
/// Author: Solomon Colley
/// Since 09/21/2019

#pragma once

#include "Console.h"
#include "DecimalPrecision.h"
#include "Dimension.h"
#include "DimensionException.h"
#include "StringFormatter.h"
#include "OperationException.h"
#include "Prompt.h"
#include "Vector2D.h"
#include "Vector3D.h"
#include "VectorOperations.h"

class CalculatorDriver
{
public:
	/// <summary>
	/// Finds the sum of two vectors.
	/// </summary>
	static void addition();

	/// <summary>
	/// Finds the difference between two vectors.
	/// </summary>
	static void subtraction();

	/// <summary>
	/// Finds the product of two vectors.
	/// </summary>
	static void multiplication();

	/// <summary>
	/// Finds the quotient of two vectors.
	/// </summary>
	static void division();
	
	/// <summary>
	/// Finds the angle between two vectors.
	/// </summary>
	static void angle();

	/// <summary>
	/// Finds the cross product of two vectors.
	/// </summary>
	static void crossProduct();

	/// <summary>
	/// Finds the dot product of two vectors.
	/// </summary>
	static void dotProduct();

	/// <summary>
	/// Finds the magnitude of one vector.
	/// </summary>
	static void magnitude();

	/// <summary>
	/// Finds the projection of two vectors.
	/// </summary>
	static void projection();

	/// <summary>
	/// Finds the unit vector of one vector.
	/// </summary>
	static void unit();

	/// <summary>
	/// Finds the product of one vector using scalar multiplication.
	/// </summary>
	static void scalarMultiplication();
}; // end CalculatorDriver

