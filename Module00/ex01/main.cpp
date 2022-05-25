#include <iostream>
#include <string>

void get_and_save_contact()
{
	std::cout << "in get_and_save_contact\n";
}

int main(void)
{
	std::string input;
	int i;

	i = 5;
	while (--i)
	{
		std::cin >> input;
		if (input == "ADD" || input == "add")
			get_and_save_contact();
		if (std::cin.eof())
			std::cout << "eof\n";
	}
	return (0);
}
