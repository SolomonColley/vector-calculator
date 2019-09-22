/// <summary>
/// This program enables users to perform various caluclations
/// involving two- and three-dimensional vectors. Additional
/// functions can be invoked throughout program execution, such
/// as displaying a 'help' message and clearing the screen.
/// </summary>
/// Author: Solomon Colley
/// Since: 09/21/2019

#include "MainMenu.h"
#include "Console.h"

int main()
{
	auto mainMenu = std::make_unique<MainMenu>();

	Console::write("Welcome to the Vector Calculator!");

	// while the user does not want to exit, run the program
	while (mainMenu->getSelection() != 0)
		mainMenu->display(); // end while

	Console::write("Thank you for using the Vector Calculator. Goodbye!");

	return 0;
} // end main

