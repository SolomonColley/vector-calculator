/// <summary>
/// This CalculatorDriver is a driver for the 2D and 3D vector calculators.
/// Each static method performs a specific calculation involving either
/// one or two 2D or 3D vectors, depending on the calculation. Operation
/// exception handling and dimension exception handling also takes place
/// within this class.
/// </summary>
/// <see cref="CalculatorDriver.h"/> for method declarations.
/// Author: Solomon Colley
/// Since 09/21/2019

#include "CalculatorDriver.h"

void CalculatorDriver::addition()
{
	int dimension = Dimension::getDimension();
	int precision = DecimalPrecision::getPrecision();

	try
	{
		// if using 2D or 3D vectors, compute the sum
		// handle dimension and operation exceptions
		if (dimension == 2)
		{
			Vector2D v1 = Prompt::get2DVector("\nCreate vector 1 ~\n");
			Vector2D v2 = Prompt::get2DVector("\nCreate vector 2 ~\n");
			Vector2D sum = v1 + v2;
			Console::write("\n" + v1.toString() + " + " + v2.toString() + " = " + sum.toString(precision) + "\n");
		}
		else if (dimension == 3)
		{
			Vector3D v1 = Prompt::get3DVector("\nCreate vector 1 ~\n");
			Vector3D v2 = Prompt::get3DVector("\nCreate vector 2 ~\n");
			Vector3D sum = v1 + v2;
			Console::write("\n" + v1.toString() + " + " + v2.toString() + " = " + sum.toString(precision) + "\n");
		}
		else
			throw DimensionException("\nTried to use an unknown dimension.\n"); // end if-else
	}
	catch (const DimensionException & e)
	{
		Console::write(e.what());
	} // end try-catch
} // end addition

void CalculatorDriver::subtraction()
{
	int dimension = Dimension::getDimension();
	int precision = DecimalPrecision::getPrecision();

	try
	{
		// if using 2D or 3D vectors, compute the difference
		// handle dimension and operation exceptions
		if (dimension == 2)
		{
			Vector2D v1 = Prompt::get2DVector("\nCreate vector 1 ~\n");
			Vector2D v2 = Prompt::get2DVector("\nCreate vector 2 ~\n");
			Vector2D difference = v1 - v2;
			Console::write("\n" + v1.toString() + " - " + v2.toString() + " = " + difference.toString(precision) + "\n");
		}
		else if (dimension == 3)
		{
			Vector3D v1 = Prompt::get3DVector("\nCreate vector 1 ~\n");
			Vector3D v2 = Prompt::get3DVector("\nCreate vector 2 ~\n");
			Vector3D difference = v1 - v2;
			Console::write("\n" + v1.toString() + " - " + v2.toString() + " = " + difference.toString(precision) + "\n");
		}
		else
			throw DimensionException("\nTried to use an unknown dimension.\n"); // end if-else
	}
	catch (const DimensionException & e)
	{
		Console::write(e.what());
	} // end try-catch
} // end subtraction

void CalculatorDriver::multiplication()
{
	int dimension = Dimension::getDimension();
	int precision = DecimalPrecision::getPrecision();

	try
	{
		// if using 2D or 3D vectors, compute the product
		// handle dimension and operation exceptions
		if (dimension == 2)
		{
			Vector2D v1 = Prompt::get2DVector("\nCreate vector 1 ~\n");
			Vector2D v2 = Prompt::get2DVector("\nCreate vector 2 ~\n");
			Vector2D product = v1 * v2;
			Console::write("\n" + v1.toString() + " * " + v2.toString() + " = " + product.toString(precision) + "\n");
		}
		else if (dimension == 3)
		{
			Vector3D v1 = Prompt::get3DVector("\nCreate vector 1 ~\n");
			Vector3D v2 = Prompt::get3DVector("\nCreate vector 2 ~\n");
			Vector3D product = v1 * v2;
			Console::write("\n" + v1.toString() + " * " + v2.toString() + " = " + product.toString(precision) + "\n");
		}
		else
			throw DimensionException("\nTried to use an unknown dimension.\n"); // end if-else
	}
	catch (const DimensionException & e)
	{
		Console::write(e.what());
	} // end try-catch
} // end multiplication

void CalculatorDriver::division()
{
	int dimension = Dimension::getDimension();
	int precision = DecimalPrecision::getPrecision();

	try
	{
		// if using 2D or 3D vectors, compute the quotient
		// handle dimension and operation exceptions
		if (dimension == 2)
		{
			Vector2D v1 = Prompt::get2DVector("\nCreate vector 1 ~\n");
			Vector2D v2 = Prompt::get2DVector("\nCreate vector 2 ~\n");
			Vector2D quotient = v1 / v2;
			Console::write("\n" + v1.toString() + " / " + v2.toString() + " = " + quotient.toString(precision) + "\n");
		}
		else if (dimension == 3)
		{
			Vector3D v1 = Prompt::get3DVector("\nCreate vector 1 ~\n");
			Vector3D v2 = Prompt::get3DVector("\nCreate vector 2 ~\n");
			Vector3D quotient = v1 / v2;
			Console::write("\n" + v1.toString() + " / " + v2.toString() + " = " + quotient.toString(precision) + "\n");
		}
		else
			throw DimensionException("\nTried to use an unknown dimension.\n"); // end if-else
	}
	catch (const DimensionException & e)
	{
		Console::write(e.what());
	}
	catch (const OperationException & e)
	{
		Console::write(e.what());
	} // end try-catch
} // end division

void CalculatorDriver::angle()
{
	int dimension = Dimension::getDimension();
	int precision = DecimalPrecision::getPrecision();

	try
	{
		// if using 2D or 3D vectors, compute the angle
		// handle dimension and operation exceptions
		if (dimension == 2)
		{
			Vector2D v1 = Prompt::get2DVector("\nCreate vector 1 ~\n");
			Vector2D v2 = Prompt::get2DVector("\nCreate vector 2 ~\n");
			double angle = VectorOperations::getAngle(v1, v2);
			Console::write("\n" + v1.toString() + " angle " + v2.toString() + " = " + StringFormatter::doubleToString(angle, precision) + "\n");
		}
		else if (dimension == 3)
		{
			Vector3D v1 = Prompt::get3DVector("\nCreate vector 1 ~\n");
			Vector3D v2 = Prompt::get3DVector("\nCreate vector 2 ~\n");
			double angle = VectorOperations::getAngle(v1, v2);
			Console::write("\n" + v1.toString() + " angle " + v2.toString() + " = " + StringFormatter::doubleToString(angle, precision) + "\n");
		}
		else
			throw DimensionException("\nTried to use an unknown dimension.\n"); // end if-else
	}
	catch (const DimensionException & e)
	{
		Console::write(e.what());
	}
	catch (const OperationException & e)
	{
		Console::write(e.what());
	} // end try-catch
} // end angle

void CalculatorDriver::crossProduct()
{
	int dimension = Dimension::getDimension();
	int precision = DecimalPrecision::getPrecision();

	try
	{
		// if using 2D or 3D vectors, compute the cross product
		// cannot compute the cross product of 2D vectors
		// handle dimension and operation exceptions
		if (dimension == 2)
			throw OperationException("\nCannot find the cross product of two 2D vectors.\n");
		else if (dimension == 3)
		{
			Vector3D v1 = Prompt::get3DVector("\nCreate vector 1 ~\n");
			Vector3D v2 = Prompt::get3DVector("\nCreate vector 2 ~\n");
			Vector3D crossProduct = VectorOperations::getCrossProduct(v1, v2);
			Console::write("\n" + v1.toString() + " cross " + v2.toString() + " = " + crossProduct.toString(precision) + "\n");
		}
		else
			throw DimensionException("\nTried to use an unknown dimension.\n"); // end if-else
	}
	catch (const DimensionException & e)
	{
		Console::write(e.what());
	}
	catch (const OperationException & e)
	{
		Console::write(e.what());
	} // end try-catch
} // end crossProduct

void CalculatorDriver::dotProduct()
{
	int dimension = Dimension::getDimension();
	int precision = DecimalPrecision::getPrecision();

	try
	{
		// if using 2D or 3D vectors, compute the dot product
		// handle dimension and operation exceptions
		if (dimension == 2)
		{
			Vector2D v1 = Prompt::get2DVector("\nCreate vector 1 ~\n");
			Vector2D v2 = Prompt::get2DVector("\nCreate vector 2 ~\n");
			double dotProduct = VectorOperations::getDotProduct(v1, v2);
			Console::write("\n" + v1.toString() + " dot " + v2.toString() + " = " + StringFormatter::doubleToString(dotProduct, precision) + "\n");
		}
		else if (dimension == 3)
		{
			Vector3D v1 = Prompt::get3DVector("\nCreate vector 1 ~\n");
			Vector3D v2 = Prompt::get3DVector("\nCreate vector 2 ~\n");
			double dotProduct = VectorOperations::getDotProduct(v1, v2);
			Console::write("\n" + v1.toString() + " dot " + v2.toString() + " = " + StringFormatter::doubleToString(dotProduct, precision) + "\n");
		}
		else
			throw DimensionException("\nTried to use an unknown dimension.\n"); // end if-else
	}
	catch (const DimensionException & e)
	{
		Console::write(e.what());
	} // end try-catch
} // end dotProduct

void CalculatorDriver::magnitude()
{
	int dimension = Dimension::getDimension();
	int precision = DecimalPrecision::getPrecision();

	try
	{
		// if using 2D or 3D vectors, compute the magnitude
		// handle dimension and operation exceptions
		if (dimension == 2)
		{
			Vector2D v = Prompt::get2DVector("\nCreate a vector ~\n");
			double magnitude = VectorOperations::getMagnitude(v);
			Console::write("\n|" + v.toString() + "| = " + StringFormatter::doubleToString(magnitude, dimension) + "\n");
		}
		else if (dimension == 3)
		{
			Vector3D v = Prompt::get3DVector("\nCreate a vector ~\n");
			double magnitude = VectorOperations::getMagnitude(v);
			Console::write("\n|" + v.toString() + "| = " + StringFormatter::doubleToString(magnitude, dimension) + "\n");
		}
		else
			throw DimensionException("\nTried to use an unknown dimension.\n"); // end if-else
	}
	catch (const DimensionException & e)
	{
		Console::write(e.what());
	} // end try-catch
} // end magnitude

void CalculatorDriver::projection()
{
	int dimension = Dimension::getDimension();
	int precision = DecimalPrecision::getPrecision();

	try
	{
		// if using 2D or 3D vectors, compute the projection
		// handle dimension and operation exceptions
		if (dimension == 2)
		{
			Vector2D v1 = Prompt::get2DVector("\nCreate vector 1 ~\n");
			Vector2D v2 = Prompt::get2DVector("\nCreate vector 2 ~\n");
			Vector2D projection = VectorOperations::getProjection(v1, v2);
			Console::write("\n" + v2.toString() + " onto " + v1.toString() + " = " + projection.toString(precision) + "\n");
		}
		else if (dimension == 3)
		{
			Vector3D v1 = Prompt::get3DVector("\nCreate vector 1 ~\n");
			Vector3D v2 = Prompt::get3DVector("\nCreate vector 2 ~\n");
			Vector3D projection = VectorOperations::getProjection(v1, v2);
			Console::write("\n" + v2.toString() + " onto " + v1.toString() + " = " + projection.toString(precision) + "\n");
		}
		else
			throw DimensionException("\nTried to use an unknown dimension.\n"); // end if-else
	}
	catch (const DimensionException & e)
	{
		Console::write(e.what());
	}
	catch (const OperationException & e)
	{
		Console::write(e.what());
	} // end try-catch
} // end projection

void CalculatorDriver::unit()
{
	int dimension = Dimension::getDimension();
	int precision = DecimalPrecision::getPrecision();

	try
	{
		// if using 2D or 3D vectors, compute the unit vector
		// handle dimension and operation exceptions
		if (dimension == 2)
		{
			Vector2D v = Prompt::get2DVector("\nCreate a vector ~\n");
			Vector2D unit = VectorOperations::getUnit(v);
			Console::write("\nunit " + v.toString() + " = " + unit.toString(precision) + "\n");
		}
		else if (dimension == 3)
		{
			Vector3D v = Prompt::get3DVector("\nCreate a vector ~\n");
			Vector3D unit = VectorOperations::getUnit(v);
			Console::write("\nunit " + v.toString() + " = " + unit.toString(precision) + "\n");
		}
		else
			throw DimensionException("\nTried to use an unknown dimension.\n"); // end if-else
	}
	catch (const DimensionException & e)
	{
		Console::write(e.what());
	}
	catch (const OperationException & e)
	{
		Console::write(e.what());
	} // end try-catch
} // end unit

void CalculatorDriver::scalarMultiplication()
{
	int dimension = Dimension::getDimension();
	int precision = DecimalPrecision::getPrecision();

	try
	{
		// if using 2D or 3D vectors, compute the product of scalar multiplication
		// handle dimension and operation exceptions
		if (dimension == 2)
		{
			Vector2D v = Prompt::get2DVector("\nCreate a vector ~\n");
			double multiplier = Prompt::getDouble("Create a multiplier: ");
			Vector2D scalarMultiple = VectorOperations::getScalarMultiple(v, multiplier);
			Console::write("\n" + v.toString() + " * " + std::to_string(multiplier) + " = " + scalarMultiple.toString(precision) + "\n");
		}
		else if (dimension == 3)
		{
			Vector3D v = Prompt::get3DVector("\nCreate a vector ~\n");
			double multiplier = Prompt::getDouble("Create a multiplier: ");
			Vector3D scalarMultiple = VectorOperations::getScalarMultiple(v, multiplier);
			Console::write("\n" + v.toString() + " * " + std::to_string(multiplier) + " = " + scalarMultiple.toString(precision) + "\n");
		}
		else
			throw DimensionException("\nTried to use an unknown dimension.\n"); // end if-else
	}
	catch (const DimensionException & e)
	{
		Console::write(e.what());
	} // end try-catch
} // end scalarMultiplication

