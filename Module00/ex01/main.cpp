// mgo's
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;

	while (TRUE)
	{
		std::cout << "Please input cmd: "; // todo: replace to use method
		phonebook.set_cmd();
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
