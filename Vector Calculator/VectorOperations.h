/// <summary>
/// This VectorOperations class provides functions used for calculating
/// various properties of 2D and 3D vectors. Exceptions relating to
/// operations are propagated.
/// </summary>
/// <see cref="VectorOperations.cpp"/> for function definitions.
/// Author: Solomon Colley
/// Since: 09/21/2019

#pragma once

#include <cmath>
#include "Console.h"
#include "OperationException.h"
#include "Vector2D.h"
#include "Vector3D.h"

class VectorOperations
{
public:
	/// <summary>
	/// Gets the angle between 2 2D vectors.
	/// </summary>
	/// <param name="v1">vector 1</param>
	/// <param name="v2">vector 2</param>
	/// <returns>the angle between v1 and v2</returns>
	static double getAngle(Vector2D& v1, Vector2D& v2) throw (OperationException);

	/// <summary>
	/// Gets the angle between 2 3D vectors.
	/// </summary>
	/// <param name="v1">vector 1</param>
	/// <param name="v2">vector 2</param>
	/// <returns>the angle between v1 and v2</returns>
	static double getAngle(Vector3D& v1, Vector3D& v2) throw (OperationException);

	/// <summary>
	/// Gets the cross product of 2 3D vectors.
	/// </summary>
	/// <param name="v1">vector 1</param>
	/// <param name="v2">vector 2</param>
	/// <returns>the cross product of v1 and v2</returns>
	static Vector3D getCrossProduct(Vector3D& v1, Vector3D& v2);

	/// <summary>
	/// Gets the dot product of 2 2D vectors.
	/// </summary>
	/// <param name="v1">vector 1</param>
	/// <param name="v2">vector 2</param>
	/// <returns>the dot product of v1 and v2</returns>
	static double getDotProduct(Vector2D& v1, Vector2D& v2);

	/// <summary>
	/// Gets the dot product of 2 3D vectors.
	/// </summary>
	/// <param name="v1">vector 1</param>
	/// <param name="v2">vector 2</param>
	/// <returns>the dot product of v1 and v2</returns>
	static double getDotProduct(Vector3D& v1, Vector3D& v2);

	/// <summary>
	/// Gets the magnitude of one 2D vector.
	/// </summary>
	/// <param name="v">the 2D vector</param>
	/// <returns>the magnitude of v</returns>
	static double getMagnitude(Vector2D& v);

	/// <summary>
	/// Gets the magnitude of one 3D vector.
	/// </summary>
	/// <param name="v">the 3D vector</param>
	/// <returns>the magnitude of v</returns>
	static double getMagnitude(Vector3D& v);

	/// <summary>
	/// Gets the projection of two 2D vectors.
	/// </summary>
	/// <param name="v1">vector 1</param>
	/// <param name="v2">vector 2</param>
	/// <returns>the projection of v1 and v2</returns>
	static Vector2D getProjection(Vector2D& v1, Vector2D& v2) throw (OperationException);

	/// <summary>
	/// Gets the projection of two 3D vectors.
	/// </summary>
	/// <param name="v1">vector 1</param>
	/// <param name="v2">vector 2</param>
	/// <returns>the projection of v1 and v2</returns>
	static Vector3D getProjection(Vector3D& v1, Vector3D& v2) throw (OperationException);

	/// <summary>
	/// Gets the unit vector of one 2D vector.
	/// </summary>
	/// <param name="v">the 2D vector</param>
	/// <returns>the unit vector of v</returns>
	static Vector2D getUnit(Vector2D& v) throw (OperationException);

	/// <summary>
	/// Gets the unit vector of one 3D vector.
	/// </summary>
	/// <param name="v">the 3D vector</param>
	/// <returns>the unit vector of v</returns>
	static Vector3D getUnit(Vector3D& v) throw (OperationException);

	/// <summary>
	/// Gets the product of one 2D vector using a scalar multiplier.
	/// </summary>
	/// <param name="v">the 2D vector</param>
	/// <param name="multiplier">the scalar multiplier</param>
	/// <returns>the product of v and the scalar multiplier</returns>
	static Vector2D getScalarMultiple(Vector2D& v, double multiplier) throw (OperationException);

	/// <summary>
	/// Gets the product of one 3D vector using a scalar multiplier.
	/// </summary>
	/// <param name="v">the 2D vector</param>
	/// <param name="multiplier">the scalar multiplier</param>
	/// <returns>the product of v and the scalar multiplier</returns>
	static Vector3D getScalarMultiple(Vector3D& v, double multiplier) throw (OperationException);
}; // end VectorOperations

