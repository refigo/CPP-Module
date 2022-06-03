#include "Contact.hpp"

e_result Contact::set_infos()
{
	set_first_name_();
	set_last_name_();
	set_nickname_();
	set_phone_number_();
	set_darkest_secret_();
	return (SUCCESS);
}

e_result Contact::set_first_name_()
{
	std::cout << "Input first name: ";
	first_name_ = get_input_trimmed_ws();
	return (SUCCESS);
}

e_result Contact::set_last_name_()
{
	std::cout << "Input last name: ";
	last_name_ = get_input_trimmed_ws();
	return (SUCCESS);
}

e_result Contact::set_nickname_()
{
	std::cout << "Input nickname: ";
	nickname_ = get_input_trimmed_ws();
	return (SUCCESS);
}

e_result Contact::set_phone_number_()
{
	std::cout << "Input phone number: ";
	phone_number_ = get_input_trimmed_ws();
	return (SUCCESS);
}

e_result Contact::set_darkest_secret_()
{
	std::cout << "Input darkest secret: ";
	darkest_secret_ = get_input_trimmed_ws();
	return (SUCCESS);
}

std::string Contact::get_first_name(void)
{
	return (first_name_);
}

std::string Contact::get_last_name(void)
{
	return (last_name_);
}
std::string Contact::get_nickname(void)
{
	return (nickname_);
}
std::string Contact::get_phone_number(void)
{
	return (phone_number_);
}
std::string Contact::get_darkest_secret(void)
{
	return (darkest_secret_);
}

void Contact::display_infos(void)
{
	std::cout << "\tFirst name: " << first_name_ << '\n';
	std::cout << "\tLast name: " << last_name_ << '\n';
	std::cout << "\tNickname: " << nickname_ << '\n';
	std::cout << "\tPhone number: " << phone_number_ << '\n';
	std::cout << "\tDarkest secret: " << darkest_secret_ << '\n';
}
