// mgo's
#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP
#include <iostream>
#include <string>

#define CONTACTS_MAX 8

class Contact
{
private:
	std::string first_name_;
	std::string last_name_;
	std::string nickname_;
	std::string phone_number_;
	std::string darkest_secret_;

public:
};

class PhoneBook
{
private:
	Contact contacts_[CONTACTS_MAX];
	int count_;
	void exit_();

public:
		void get_input();
	// int add_and_save();
	// int search_and_display();

	PhoneBook(void);
	~PhoneBook(void);
};

PhoneBook::PhoneBook() {}

void PhoneBook::get_input(void)
{
	std::string input;
	std::cin >> input;
	std::cout << "input: [" << input << "]\n";
	if (input == "EXIT")
		exit(0);
}
#endif