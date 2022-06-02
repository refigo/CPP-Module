// mgo's
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include "utils.hpp"

#include <iostream>
#include <iomanip>
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

	void save_contact(void);
	void display_contacts(void);
	// show_contacts
	// show contact

	PhoneBook(void);
	~PhoneBook(void);
};

#endif
