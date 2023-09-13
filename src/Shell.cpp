#include "Shell.h"

void Shell::runShell()
{
	std::string user_input;
	while (1)
	{
		std::cout << "oddOS$ ";
		std::getline(std::cin, user_input);
		std::vector<std::string> input = parseInput(user_input);
		for (std::string s : input)
		{
			std::cout << s << std::endl;
		}
		if (input[0] == "exit")
		{
			exitShell();
		}
	}
}

void Shell::exitShell()
{
	std::exit(EXIT_SUCCESS);
}

std::vector<std::string> Shell::parseInput(const std::string& user_input)
{
	std::istringstream iss(user_input);
	std::vector<std::string> tokens;
	std::string token;

	while (std::getline(iss, token, ' '))
	{
		tokens.push_back(token);
	}
	return tokens;
}

void Shell::executeCommand(const std::vector<std::string>& command)
{
	if (command.size() == 0)
	{
		return;
	}
	if (command[0] == "exit")
	{
		return;
	}
}

const char** Shell::convertToCStringArray(const std::vector<std::string>& tokens)
{
	size_t n = tokens.size();
	const char** args = new const char* [n + 1];
	for (size_t i = 0; i < n; i++)
	{
		args[i] = tokens[i].c_str();
	}
	args[n] = nullptr;
	return args;
}
