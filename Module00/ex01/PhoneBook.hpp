// mgo's
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include "utils.hpp"

#include <iostream>
#include <iomanip>
#include <string>

#define CONTACTS_MAX 8

class PhoneBook
{
private:
	Contact contacts_[CONTACTS_MAX];
	int current_contact_count_;
	int current_contact_position_;
	std::string cmd_;

	void print_contacts_header_(void);
	void print_contact_names_index_(int i);

public:
	void set_cmd(void);
	e_bool is_cmd_add(void);
	e_bool is_cmd_search(void);
	e_bool is_cmd_exit(void);

	void save_contact(void);
	void display_contacts(void);

	PhoneBook(void);
	~PhoneBook(void);
};

#endif
