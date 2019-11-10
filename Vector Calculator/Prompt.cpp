#include "Prompt.h"

int Prompt::getInt(const std::string & prompt)
{
	int input = 0;
	bool isValid = false;

	while (!isValid)
	{
		std::cout << prompt;

		try
		{
			std::cin >> input;
			if (std::cin.fail())
				throw (InputException("entry must be an integer"));
			else
				isValid = true; // end if-else
		}
		catch (const InputException& e)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << e.what() << std::endl;
		} // end try-catch
	} // end while

	return input;
} // end getInt

int Prompt::getInt(const std::string & prompt, const int min, const int max)
{
	int input = 0;
	bool isValid = false;

	while (!isValid)
	{
		input = getInt(prompt);

		try
		{
			if (input < min || input >= max)
				throw InputException("entry must be >= " + std::to_string(min)
					+ " and < " + std::to_string(max));
			else
				isValid = true; // end if-else
		}
		catch (const InputException& e)
		{
			std::cout << e.what() << std::endl;
		} // end try-catch
	} // end while

	return input;
} // end getInt

double Prompt::getDouble(const std::string & prompt)
{
	double input = 0.0;
	bool isValid = false;

	while (!isValid)
	{
		std::cout << prompt;

		try
		{
			std::cin >> input;
			if (std::cin.fail())
				throw InputException("entry must be a decimal number");
			else
				isValid = true; // end if-else
		}
		catch (const InputException& e)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << e.what() << std::endl;
		} // end try-catch
	} // end while

	return input;
} // end getDouble

double Prompt::getDouble(const std::string & prompt, const double min, const double max)
{
	double input = 0.0;
	bool isValid = false;

	while (!isValid)
	{
		input = getDouble(prompt);

		try
		{
			if (input < min || input >= max)
				throw InputException("entry must be >= " + std::to_string(min)
					+ " and < " + std::to_string(max));
			else
				isValid = true; // end if-else
		}
		catch (const InputException& e)
		{
			std::cout << e.what() << std::endl;
		} // end try-catch
	} // end while

	return input;
} // end getDouble

std::string Prompt::getString(const std::string & prompt)
{
	std::string input = "";
	bool isValid = false;

	while (!isValid)
	{
		std::cout << prompt;

		try
		{
			getline(std::cin, input);
			if (input.empty())
				throw InputException("entry cannot be null or empty");
			else
				isValid = true;
		}
		catch (const InputException& e)
		{
			std::cout << e.what() << std::endl;
		} // end try-catch
	} // end while

	return input;
} // end getString

std::string Prompt::getString(const std::string & prompt, const std::vector<std::string> & conditions)
{
	std::string input = "";
	bool isValid = false;
	int failCount = 0;

	while (!isValid)
	{
		input = getString(prompt);

		try
		{
			for (auto condition : conditions)
				if (input != condition)
					failCount++; // end if-else, end for

			if (failCount > 0)
				throw InputException("entry must match one or more given conditions");
			else
				isValid = true; // end if-else
		}
		catch (const InputException& e)
		{
			std::cout << e.what() << std::endl;
		} // end try-catch
	} // end while

	return input;
} // end getInput

Vector2D Prompt::get2DVector(const std::string & prompt)
{
	Vector2D v;
	double x = 0.0, y = 0.0;

	std::cout << prompt;
	x = getDouble("Enter x-value: ");
	y = getDouble("Enter y-value: ");
	v = Vector2D(x, y);

	return v;
} // end get2DVector

Vector3D Prompt::get3DVector(const std::string & prompt)
{
	Vector3D v;
	double x = 0.0, y = 0.0, z = 0.0;

	std::cout << prompt;
	x = getDouble("Enter x-value: ");
	y = getDouble("Enter y-value: ");
	z = getDouble("Enter z-value: ");
	v = Vector3D(x, y, z);

	return v;
} // end get3DVector

