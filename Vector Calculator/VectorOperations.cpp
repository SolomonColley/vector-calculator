/// <summary>
/// This VectorOperations class provides functions used for calculating
/// various properties of 2D and 3D vectors. Exceptions relating to
/// operations are propagated.
/// </summary>
/// <see cref="VectorOperations.h"/> for function declarations.
/// Author: Solomon Colley
/// Since: 09/21/2019

#include "VectorOperations.h"

double VectorOperations::getAngle(Vector2D& v1, Vector2D& v2)
{
	double angle = 0.0, dotProduct = 0.0, v1Magnitude = 0.0, v2Magnitude = 0.0;

	dotProduct = getDotProduct(v1, v2);
	v1Magnitude = getMagnitude(v1);
	v2Magnitude = getMagnitude(v2);

	if (v1Magnitude == 0.0 || v2Magnitude == 0.0)
		throw OperationException("\nDivide by zero exception caused by "
			+ std::string() + typeid(v1Magnitude).name() + " * "
			+ typeid(v2Magnitude).name() + "\n");
	else
		angle = dotProduct / (v1Magnitude * v2Magnitude); // end if-else

	return angle;
} // end getAngle

double VectorOperations::getAngle(Vector3D& v1, Vector3D& v2)
{
	double angle = 0.0, dotproduct = 0.0, v1Magnitude = 0.0, v2Magnitude = 0.0;

	dotproduct = getDotProduct(v1, v2);
	v1Magnitude = getMagnitude(v1);
	v2Magnitude = getMagnitude(v2);

	if (v1Magnitude == 0.0 || v2Magnitude == 0.0)
		throw OperationException("\nDivide by zero exception caused by "
			+ std::string() + typeid(v1Magnitude).name() + " * "
			+ typeid(v2Magnitude).name() + "\n");
	else
		angle = dotproduct / (v1Magnitude * v2Magnitude); // end if-else

	return angle;
} // end getAngle

Vector3D VectorOperations::getCrossProduct(Vector3D& v1, Vector3D& v2)
{
	double x1 = 0.0, y1 = 0.0, z1 = 0.0,
		x2 = 0.0, y2 = 0.0, z2 = 0.0,
		cpx = 0.0, cpy = 0.0, cpz = 0.0;
	Vector3D crossProduct;

	x1 = v1.getX();
	y1 = v1.getY();
	z1 = v1.getZ();
	x2 = v2.getX();
	y2 = v2.getY();
	z2 = v2.getZ();

	cpx = (y1 * z2) - (z1 - y2);
	cpy = (z1 * x2) - (x1 * z2);
	cpz = (x1 * y2) - (y1 * x1);
	crossProduct = Vector3D(cpx, cpy, cpz);

	return crossProduct;
} // end getCrossProduct

double VectorOperations::getDotProduct(Vector2D& v1, Vector2D& v2)
{
	double dotProduct = 0.0;

	dotProduct = (v1.getX() * v2.getX()) + (v1.getY() * v2.getY());

	return dotProduct;
} // end getDotProduct

double VectorOperations::getDotProduct(Vector3D& v1, Vector3D& v2)
{
	double dotProduct = 0.0;

	dotProduct = (v1.getX() * v2.getX())
		+ (v1.getY() * v2.getY())
		+ (v1.getZ() * v2.getZ());

	return dotProduct;
} // end getDotProduct

double VectorOperations::getMagnitude(Vector2D& v)
{
	double magnitude = 0.0;

	magnitude = sqrt(pow(v.getX(), 2) + pow(v.getY(), 2));

	return magnitude;
} // end getMagnitude

double VectorOperations::getMagnitude(Vector3D& v)
{
	double magnitude = 0.0;

	magnitude = sqrt(pow(v.getX(), 2)
		+ pow(v.getY(), 2)
		+ pow(v.getZ(), 2));

	return magnitude;
} // end getMagnitude

Vector2D VectorOperations::getProjection(Vector2D& v1, Vector2D& v2)
{
	double x1, y1, dotProduct, magnitude, multiplier;
	Vector2D projection;

	x1 = v1.getX();
	y1 = v1.getY();

	dotProduct = getDotProduct(v1, v2);
	magnitude = pow(getMagnitude(v1), 2);

	if (magnitude == 0.0)
		throw OperationException("\nDivide by zero exception caused by "
			+ std::string() + typeid(magnitude).name() + "\n");
	else
	{
		multiplier = dotProduct / magnitude;
		projection = Vector2D(x1 * multiplier, y1 * multiplier);
	} // end if-else

	return projection;
} // end getProjection

Vector3D VectorOperations::getProjection(Vector3D& v1, Vector3D& v2)
{
	double x1 = 0.0, y1 = 0.0, z1 = 0.0,
		dotProduct = 0.0, magnitude = 0.0, multiplier = 0.0;
	Vector3D projection;

	x1 = v1.getX();
	y1 = v1.getY();
	z1 = v1.getZ();

	dotProduct = getDotProduct(v1, v2);
	magnitude = pow(getMagnitude(v1), 2);

	if (magnitude == 0)
		throw OperationException("\nDivide by zero exception caused by "
			+ std::string() + typeid(magnitude).name() + "\n");
	else
	{
		multiplier = dotProduct / magnitude;
		projection = Vector3D(x1 * multiplier, y1 * multiplier, z1 * multiplier);
	} // end if-else

	return projection;
} // end getProjection

Vector2D VectorOperations::getUnit(Vector2D& v)
{
	double x = 0.0, y = 0.0, magnitude = 0.0;
	Vector2D unit;

	x = v.getX();
	y = v.getY();
	magnitude = getMagnitude(v);

	if (magnitude == 0.0)
		throw OperationException("\nDivide by zero exception caused by "
			+ std::string() + typeid(magnitude).name() + "\n");
	else
		unit = Vector2D(x / magnitude, y / magnitude); // end if-else

	return unit;
} // end getUnit

Vector3D VectorOperations::getUnit(Vector3D& v)
{
	double x = 0.0, y = 0.0, z = 0.0, magnitude = 0.0;
	Vector3D unit;

	x = v.getX();
	y = v.getY();
	z = v.getZ();
	magnitude = getMagnitude(v);

	if (magnitude == 0.0)
		throw OperationException("\nDivide by zero exception caused by "
			+ std::string() + typeid(magnitude).name() + "\n");
	else
		unit = Vector3D(x / magnitude, y / magnitude, z / magnitude); // end if-else

	return unit;
} // end getUnit

Vector2D VectorOperations::getScalarMultiple(Vector2D& v, double multiplier)
{
	double x = 0.0, y = 0.0;
	Vector2D scalarMultiple;

	x = v.getX();
	y = v.getY();
	scalarMultiple = Vector2D(x * multiplier, y * multiplier);

	return scalarMultiple;
} // end getScalarMultiple

Vector3D VectorOperations::getScalarMultiple(Vector3D& v, double multiplier)
{
	double x = 0.0, y = 0.0, z = 0.0;
	Vector3D scalarMultiple;

	x = v.getX();
	y = v.getY();
	z = v.getZ();
	scalarMultiple = Vector3D(x * multiplier, y * multiplier, z * multiplier);

	return scalarMultiple;
} // end getScalarMultiple

