/// <summary>
/// This MainMenu class implements the function declarations found
/// within the MenuInterface. A menu is displayed, the user is prompted,
/// then their selection is parsed to perform an appropriate action.
/// The user's selection can be retrieved.
/// </summary>
/// See <see cref="MenuInterface.h"/> for implemented methods.
/// See <see cref="MainMenu.h"/> for method declarations.
/// Author: Solomon Colley
/// Since: 09/21/2019

#include "MainMenu.h"

MainMenu::MainMenu()
	: MENU(std::string() + "Main Menu\n"
	+ "1 - 2D Vector Calculator\n"
	+ "2 - 3D Vector Calculator\n"
	+ "3 - Change Output Precision\n"
	+ "4 - Clear Screen\n"
	+ "5 - Help\n"
	+ "0 - Exit\n"),
	PROMPT("Enter selection: "),
	HELP(std::string() + "\nUse this calculator and its functions to caluclate various properties\n"
	+ "of two- and three-dimenional vectors. The available computations include the following:\n\n"
	+ "		- Addition\n"
	+ "		- Subtraction\n"
	+ "		- Multiplication\n"
	+ "		- Division\n"
	+ "		- Angle\n"
	+ "		- Cross Product\n"
	+ "		- Dot Product\n"
	+ "		- Magnitude\n"
	+ "		- Projection\n"
	+ "		- Unit\n"
	+ "		- Scalar Multiplication\n\n"
	+ "To navigate through the menus, enter an option's corresponding digit.\n"
	+ "You may optionally change the decimal precision your answers are rounded to.\n"
	+ "Internally, however, numbers are used exactly how they were entered.\n"
	+ "By default, the decimal precision is set to 4 decimal placed.\n"
	+ "The screen can be cleared from the main menu.\n\n"),
	calculatorMenu(std::make_unique<CalculatorMenu>()),
	selection(-1)
{
} // end default constructor

MainMenu::~MainMenu()
{
	calculatorMenu->~CalculatorMenu();
} // end destructor

void MainMenu::display()
{
	Console::write(MENU);
	prompt();
} // end display

int MainMenu::getSelection()
{
	return selection;
} // end getSelection

void MainMenu::prompt()
{
	selection = Prompt::getInt(PROMPT, 0, 6);
	parse();
} // end prompt

void MainMenu::parse()
{
	switch (selection)
	{
	case 0:
		break;
	case 1:
		do
		{
			Dimension::setDimension(2);
			calculatorMenu->display();
		} while (calculatorMenu->getSelection() != 0);
		break;
	case 2:
		do
		{
			Dimension::setDimension(3);
			calculatorMenu->display();
		} while (calculatorMenu->getSelection() != 0);
		break;
	case 3:
		// decimal precision can be between 0 and 15
		DecimalPrecision::setPrecision(Prompt::getInt("\nEnter number of decimal places (0 - 15): ", 0, 16));
		Console::write("\n");
		break;
	case 4:
		Console::clear();
		break;
	case 5:
		Console::write(HELP);
		break;
	default:
		break;
	} // end switch-case
} // end parse

