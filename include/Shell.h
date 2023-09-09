#ifndef SHELL_H
#define SHELL_H

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

class Shell
{
public:
	// Runs the shell emulation
	void runShell();
private:
	// Exits the shell emulation
	void exitShell();

	// Input: Takes user inputted string
	// Output: user inputted string as a vector
	// - 0: Command
	// - 1+: Arguments
	std::vector<std::string> parseInput(const std::string&);

	// Run the command with its given arguments
	void executeCommand(const std::vector<std::string>&);

	// Helper Functions
	// Convert a string vector to a C string array
	const char** convertToCStringArray(const std::vector<std::string>&);
};

#endif // !SHELL_H
