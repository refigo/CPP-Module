/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:24:18 by mgo               #+#    #+#             */
/*   Updated: 2022/06/16 09:18:10 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

bool Contact::set_input_first_name_(void)
{
	std::cout << "\tInput first name: ";
	first_name_ = get_input_trimmed_ws();
	if (is_not_cin_stream_good())
		return (false);
	return (true);
}

bool Contact::set_input_last_name_(void)
{
	std::cout << "\tInput last name: ";
	last_name_ = get_input_trimmed_ws();
	if (is_not_cin_stream_good())
		return (false);
	return (true);
}

bool Contact::set_input_nickname_(void)
{
	std::cout << "\tInput nickname: ";
	nickname_ = get_input_trimmed_ws();
	if (is_not_cin_stream_good())
		return (false);
	return (true);
}

bool Contact::set_input_phone_number_(void)
{
	std::cout << "\tInput phone number: ";
	phone_number_ = get_input_trimmed_ws();
	if (is_not_cin_stream_good())
		return (false);
	for (std::string::iterator it = phone_number_.begin(); \
		it != phone_number_.end(); \
		++it)
		if (*it != '-' && (*it < '0' || '9' < *it))
		{
			std::cout << B_RED << "\nFailed to save! " << \
				"-> phone number should only have numbers and bars(-).\n" \
				<< END_OF_COLOR;
			return (false);
		}
	return (true);
}

bool Contact::set_input_darkest_secret_(void)
{
	std::cout << "\tInput darkest secret: ";
	darkest_secret_ = get_input_trimmed_ws();
	if (is_not_cin_stream_good())
		return (false);
	return (true);
}

bool Contact::set_inputs_infos(int index)
{
	std::cout << B_WHITE \
		<< "\nInput informations in the new contact of index [" \
		<< index << "]\n" \
		<< END_OF_COLOR \
		<< "\t->\n";
	if (set_input_first_name_() == false \
	|| set_input_last_name_() == false \
	|| set_input_nickname_() == false \
	|| set_input_phone_number_() == false \
	|| set_input_darkest_secret_() == false)
		return (false);
	return (true);
}

std::string Contact::get_first_name(void) const
{
	return (first_name_);
}

std::string Contact::get_last_name(void) const
{
	return (last_name_);
}

std::string Contact::get_nickname(void) const
{
	return (nickname_);
}

std::string Contact::get_phone_number(void) const
{
	return (phone_number_);
}

std::string Contact::get_darkest_secret(void) const
{
	return (darkest_secret_);
}

void Contact::display_infos(void) const
{
	std::cout << B_PURPLE << "\n\t[Contact informations]\n" << END_OF_COLOR;
	std::cout << "\tFirst name: " << first_name_ << '\n';
	std::cout << "\tLast name: " << last_name_ << '\n';
	std::cout << "\tNickname: " << nickname_ << '\n';
	std::cout << "\tPhone number: " << phone_number_ << '\n';
	std::cout << "\tDarkest secret: " << darkest_secret_ << '\n';
}

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}
