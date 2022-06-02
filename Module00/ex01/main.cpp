// mgo's
#include "PhoneBook.hpp"

void get_and_save_contact()
{
	std::cout << "in get_and_save_contact\n";
}

int main(void)
{
	PhoneBook phonebook;

	while (1)
	{
		// print panel(prompt)
		std::cout << "Please input cmd: "; // todo: replace to use method
		// get cmd
		phonebook.get_cmd();
		// run
		if (phonebook.is_cmd_exit())
			break;
		else if (phonebook.is_cmd_add())
			phonebook.save_contact();
		else if (phonebook.is_cmd_search())
			phonebook.display_contacts();
		else
			std::cout << "invalid cmd..\n";
	}
	//system("leaks test");
	return (0);
}
