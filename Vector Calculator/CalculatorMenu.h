/// <summary>
/// This calculator menu class implements the functions declarations found
/// within the MenuInterface. A menu is displayed, the user is prompted,
/// then their selection is parsed to perform an appropriate action.
/// The user's selection can be retrieved.
/// </summary>
/// See <see cref="MenuInterface.h"/> for implemented methods.
/// See <see cref="CalculatorMenu.cpp"/> for method definitions.
/// Author: Solomon Colley
/// Since: 09/21/2019

#pragma once

#include <string>
#include "CalculatorDriver.h"
#include "Console.h"
#include "MenuInterface.h"
#include "Prompt.h"

class CalculatorMenu : public MenuInterface<int>
{
public:
	/// <summary>
	/// The default class constructor. Initializes all the class
	/// privat members.
	/// </summary>
	CalculatorMenu();

	/// <summary>
	/// The class destructor. Frees allocated memory.
	/// </summary>
	~CalculatorMenu();

	/// <summary>
	/// Displays the menu to the console window for the user
	/// and calls the prompt method.
	/// </summary>
	void display();

	/// <summary>
	/// Gets the user's selection.
	/// </summary>
	/// <returns>the user's selection</returns>
	int getSelection();
private:
	const std::string MENU, PROMPT;
	
	int selection;

	/// <summary>
	/// Prompts the user to enter their selection after the
	/// menu has been displayed.
	/// </summary>
	void prompt();

	/// <summary>
	/// Parses the user's menu selection after they were
	/// prompted.
	/// </summary>
	void parse();
}; // end CalculatorMenu

