#include "Shell.h"

Shell::Shell()
{

}

void Shell::runShell()
{
	std::string user_input;
	while (1)
	{
		std::cout << "oddOS$ ";
		std::getline(std::cin, user_input);
		if (user_input == "exit")
		{
			exitShell();
		}
		std::cout << user_input << std::endl;
	}
}

void Shell::exitShell()
{
	std::exit(EXIT_SUCCESS);
}