#include <iostream>
#include <string>

int main()
{
	std::string user_input;
	while (1)
	{
		std::cout << "oddOS$ ";
		std::getline(std::cin, user_input);

		if (user_input == "exit")
		{
			break;
		}
		std::cout << user_input << std::endl;
	}
	return 0;
}