// mgo's
#include "PhoneBook.hpp"

void get_and_save_contact()
{
	std::cout << "in get_and_save_contact\n";
}

int main(void)
{
	PhoneBook phonebook;
	// constructor

	std::cout << "panel: hello mgo!\n";
	while (1)
	{
		// print panel(prompt)
		std::cout << "Please input cmd: ";
		// get input
		phonebook.get_input();
		// run
	}

	return (0);
}
