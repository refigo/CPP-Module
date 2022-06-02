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
};

e_result Contact::get_informs()
{
	get_first_name();
	get_last_name();
	get_nickname();
	get_phone_number();
	get_darkest_secret();
	return (SUCCESS);
}

e_result Contact::get_first_name()
{
	std::cout << "Input first name: ";
	first_name_ = get_input_with_trimming_ws();
	return (SUCCESS);
}

e_result Contact::get_last_name()
{
	std::cout << "Input last name: ";
	last_name_ = get_input_with_trimming_ws();
	return (SUCCESS);
}

e_result Contact::get_nickname()
{
	std::cout << "Input nickname: ";
	nickname_ = get_input_with_trimming_ws();
	return (SUCCESS);
}

e_result Contact::get_phone_number()
{
	std::cout << "Input phone number: ";
	phone_number_ = get_input_with_trimming_ws();
	return (SUCCESS);
}

e_result Contact::get_darkest_secret()
{
	std::cout << "Input darkest secret: ";
	darkest_secret_ = get_input_with_trimming_ws();
	return (SUCCESS);
}

#endif
