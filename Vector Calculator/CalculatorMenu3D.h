#pragma once

#include <string>
#include "CalculatorDriver.h"
#include "Console.h"
#include "MenuInterface.h"
#include "Prompt.h"

class CalculatorMenu3D : public MenuInterface<int>
{
public:
	/// <summary>
	/// The default class constructor. Initializes all the class
	/// privat members.
	/// </summary>
	CalculatorMenu3D();

	/// <summary>
	/// The class destructor. Frees allocated memory.
	/// </summary>
	~CalculatorMenu3D();

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
} // end CalculatorMenu3D

