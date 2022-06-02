// mgo's
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include "utils.hpp"

#include <iostream>
#include <string>

#define CONTACTS_MAX 8

enum e_bool
{
	FALSE,
	TRUE
};

class PhoneBook
{
private:
	Contact contacts_[CONTACTS_MAX];
	int current_contact_count_;
	int current_contact_position_;
	std::string cmd_;

public:
	void get_cmd(void);
	e_bool is_cmd_add(void);
	e_bool is_cmd_search(void);
	e_bool is_cmd_exit(void);

	void add_contact(void);
	void show_contacts(void);
	// show_contacts
	// show contact

	PhoneBook(void);
	~PhoneBook(void);
};

PhoneBook::PhoneBook(void)
{
	current_contact_count_ = 0;
	current_contact_position_ = 0;
	std::cout << "Opened my awesome phone book!\n";
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Closed my awesome phone book..\n";
}

// get input, get command
void PhoneBook::get_cmd(void)
{
	std::string input;

	input = get_input_with_trimming_ws();
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

void PhoneBook::add_contact(void)
{
	Contact contact;

	contact.get_informs();
	contacts_[current_contact_count_] = contact;
	// todo: refactor
	if (current_contact_count_ != CONTACTS_MAX)
		current_contact_count_++;
	if (current_contact_position_ == CONTACTS_MAX - 1)
		current_contact_position_ = 0;
	else
		current_contact_position_++;
}

#endif
