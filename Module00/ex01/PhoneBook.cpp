#include "PhoneBook.hpp"

void PhoneBook::print_contact_shortly_index_(int i)
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

void PhoneBook::set_cmd(void)
{
	std::string input;

	input = get_input_trimmed_ws();
	//std::cout << "input: [" << input << "]\n"; // todo: remove
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
	if (current_contact_count_ != CONTACTS_MAX)
		current_contact_count_++;
	if (current_contact_position_ == CONTACTS_MAX - 1)
		current_contact_position_ = 0;
	else
		current_contact_position_++;
	std::cout << "Successfully saved!\n";
}

void PhoneBook::display_contacts(void)
{
	if (current_contact_count_ == 0)
	{
		std::cout << "None of contacts...\n";
		return;
	}
	std::cout << std::setfill('=') << std::setw(46) << '\n';
	std::cout << B_WHITE;
	std::cout << '|';
	cout_str_with_width("index", 10);
	std::cout << '|';
	cout_str_with_width("first name", 10);
	std::cout << '|';
	cout_str_with_width("last name", 10);
	std::cout << '|';
	cout_str_with_width("nickname", 10);
	std::cout << '|' << '\n';
	std::cout << END_OF_COLOR;
	for (int i = 0; i < current_contact_count_; ++i)
		print_contact_shortly_index_(i);
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
