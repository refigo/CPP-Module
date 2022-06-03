// mgo's
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "utils.hpp"

#include <iostream>
#include <string>

class Contact
{
private:
	std::string first_name_;
	std::string last_name_;
	std::string nickname_;
	std::string phone_number_;
	std::string darkest_secret_;

	e_result set_first_name_(void);
	e_result set_last_name_(void);
	e_result set_nickname_(void);
	e_result set_phone_number_(void);
	e_result set_darkest_secret_(void);

public:
	e_result set_infos(void);

	std::string get_first_name(void);
	std::string get_last_name(void);
	std::string get_nickname(void);
	std::string get_phone_number(void);
	std::string get_darkest_secret(void);

	void print_infos(void); // todo: implement
};

#endif
