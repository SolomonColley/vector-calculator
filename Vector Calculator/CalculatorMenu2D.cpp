#include "CalculatorMenu2D.h"

CalculatorMenu2D::CalculatorMenu2D()
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
	PROMPT("Enter selection: "), selection(-1),
	calculatorDriver(std::make_unique<CalculatorDriver>())
{
	calculatorDriver->setDimension(2);
	calculatorDriver->setPrecision(4);
} // end default constructor

CalculatorMenu2D::~CalculatorMenu2D() { } // end destructor

void CalculatorMenu2D::display()
{
	Console::write(MENU);
	prompt();
} // end didsplay

int CalculatorMenu2D::getSelection()
{
	return selection;
} // end getSelection

void CalculatorMenu2D::prompt()
{
	selection = Prompt::getInt(PROMPT, 0, 12);
	parse();
} // end prompt

void CalculatorMenu2D::parse()
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

