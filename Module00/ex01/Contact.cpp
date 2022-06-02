#include "Contact.hpp"

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

std::string Contact::put_first_name(void)
{
	return (first_name_);
}

std::string Contact::put_last_name(void)
{
	return (last_name_);
}
std::string Contact::put_nickname(void)
{
	return (nickname_);
}
std::string Contact::put_phone_number(void)
{
	return (phone_number_);
}
std::string Contact::put_darkest_secret(void)
{
	return (darkest_secret_);
}
