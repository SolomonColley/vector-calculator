#include "CalculatorMenu3D.h"

CalculatorMenu3D::CalculatorMenu3D()
	: MENU(std::string() + "\nCalculator Menu\n"
		+ "1 - Addition\n"
		+ "2 - Subtraction\n"
		+ "3 - Multiplication\n"
		+ "4 - Division\n"
		+ "5 - Angle\n"
		+ "6 - Cross Product\n"
		+ "7 - Dot Product\n"
		+ "8 - Magnitude\n"
		+ "9 - Projection\n"
		+ "10 - Unit\n"
		+ "11 - Scalar Multiplication\n"
		+ "0 - Back\n"),
	PROMPT("Enter selection: "), selection(-1)
{
} // end default constructor

CalculatorMenu3D::~CalculatorMenu3D() { } // end destructor

void CalculatorMenu3D::display()
{
	Console::write(MENU);
	prompt();
} // end didsplay

int CalculatorMenu3D::getSelection()
{
	return selection;
} // end getSelection

void CalculatorMenu3D::prompt()
{
	selection = Prompt::getInt(PROMPT, 0, 12);
	parse();
} // end prompt

void CalculatorMenu3D::parse()
{
	switch (selection)
	{
	case 0:
		Console::write("\n");
		break;
	case 1:
		CalculatorDriver::addition();
		break;
	case 2:
		CalculatorDriver::subtraction();
		break;
	case 3:
		CalculatorDriver::multiplication();
		break;
	case 4:
		CalculatorDriver::division();
		break;
	case 5:
		CalculatorDriver::angle();
		break;
	case 6:
		CalculatorDriver::crossProduct();
		break;
	case 7:
		CalculatorDriver::dotProduct();
		break;
	case 8:
		CalculatorDriver::magnitude();
		break;
	case 9:
		CalculatorDriver::projection();
		break;
	case 10:
		CalculatorDriver::unit();
		break;
	case 11:
		CalculatorDriver::scalarMultiplication();
		break;
	default:
		break;
	} // end switch-case
} // end parse

