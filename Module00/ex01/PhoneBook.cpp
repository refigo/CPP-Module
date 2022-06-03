#include "PhoneBook.hpp"

void PhoneBook::set_cmd(void)
{
	std::string input;

	input = get_input_trimmed_ws();
	std::cout << "input: [" << input << "]\n"; // todo: remove
	cmd_ = input;
}

e_bool PhoneBook::is_cmd_add(void)
{
	if (cmd_ == "ADD")
		return (TRUE);
	else if (cmd_ == "add")
		return (TRUE);
	else if (cmd_ == "a")
		return (TRUE);
	return (FALSE);
}

e_bool PhoneBook::is_cmd_search(void)
{
	if (cmd_ == "SEARCH")
		return (TRUE);
	else if (cmd_ == "search")
		return (TRUE);
	else if (cmd_ == "s")
		return (TRUE);
	return (FALSE);
}

e_bool PhoneBook::is_cmd_exit(void)
{
	if (cmd_ == "EXIT")
		return (TRUE);
	else if (cmd_ == "exit")
		return (TRUE);
	else if (cmd_ == "e")
		return (TRUE);
	else if (cmd_ == "")
		return (TRUE);
	return (FALSE);
}

void PhoneBook::save_contact(void)
{
	Contact contact;

	contact.set_infos();
	contacts_[current_contact_position_] = contact;
	// todo: refactor
	if (current_contact_count_ != CONTACTS_MAX)
		current_contact_count_++;
	if (current_contact_position_ == CONTACTS_MAX - 1)
		current_contact_position_ = 0;
	else
		current_contact_position_++;
	std::cout << "Successfully saved!\n";
}

void cout_str_with_width(std::string str, int width)
{
	if (width == 0)
		return;
	else if (str.length() > width)
		std::cout << str.substr(0, width - 1) << ".";
	else
		std::cout << std::setfill(' ') << std::setw(width) << str;
}

void PhoneBook::display_contacts(void)
{
	if (current_contact_count_ == 0)
	{
		std::cout << "None of contacts...\n";
		return;
	}

	// index, first name, last name and nickname
	std::cout << std::setfill('=') << std::setw(46) << '\n';
	std::cout << "\033[1;37m"; // B_WHITE(bold white)
	std::cout << '|';
	cout_str_with_width("index", 10);
	std::cout << '|';
	cout_str_with_width("first name", 10);
	std::cout << '|';
	cout_str_with_width("last name", 10);
	std::cout << '|';
	cout_str_with_width("nickname", 10);
	std::cout << '|' << '\n';
	std::cout << "\033[0;0m"; // EOC(end of color)

	for (int i = 0; i < current_contact_count_; ++i)
	{
		std::cout << '|' << std::setfill(' ') << std::setw(10) << i;
		std::cout << '|';
		cout_str_with_width(contacts_[i].get_first_name(), 10);
		std::cout << '|';
		cout_str_with_width(contacts_[i].get_last_name(), 10);
		std::cout << '|';
		cout_str_with_width(contacts_[i].get_nickname(), 10);
		std::cout << '|' << '\n';
	}

	std::cout << std::setfill('=') << std::setw(46) << '\n';
	// get index and display contact information
}

PhoneBook::PhoneBook(void)
{
	current_contact_count_ = 0;
	current_contact_position_ = 0;
	std::cout << "Opened my awesome phone book!\n";
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Closed my awesome phone book...\n";
}
