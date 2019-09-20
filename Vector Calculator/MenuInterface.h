/// <summary>
/// MenuInterface declares virtual methods that all its implementors
/// must define. All menus that implement this MenuInterface can
/// display themselves, prompt the user, parse the user's input, and
/// return the user's selection. The type of selection is arbitrary.
/// </summary>

#pragma once

template<class SelectionType>
class MenuInterface
{
public:
	/// <summary>
	/// Displays the menu to the console window or screen.
	/// </summary>
	virtual void display() = 0;

	/// <summary>
	/// Prompts the user to enter their menu selection.
	/// </summary>
	virtual void prompt() = 0;

	/// <summary>
	/// Parses the user's menu selection to determine further
	/// program execution.
	/// </summary>
	virtual void parse() = 0;

	/// <summary>
	/// Gets the user's menu selection.
	/// </summary>
	/// <returns>the user's menu selection</returns>
	virtual SelectionType getSelection() = 0;
}; // end MenuInterface

