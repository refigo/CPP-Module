// mgo's
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "utils.hpp"

#include <iostream>
#include <string>

enum e_result
{
	FAIL,
	SUCCESS
};

class Contact
{
private:
	std::string first_name_;
	std::string last_name_;
	std::string nickname_;
	std::string phone_number_;
	std::string darkest_secret_;

public:
	e_result get_informs(void);
	e_result get_first_name(void);
	e_result get_last_name(void);
	e_result get_nickname(void);
	e_result get_phone_number(void);
	e_result get_darkest_secret(void);
	//const std::string &get_first_name() const;
	std::string put_first_name(void);
	std::string put_last_name(void);
	std::string put_nickname(void);
	std::string put_phone_number(void);
	std::string put_darkest_secret(void);
};

#endif
