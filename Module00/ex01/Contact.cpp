/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:24:18 by mgo               #+#    #+#             */
/*   Updated: 2022/06/09 20:20:15 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

e_result Contact::set_inputs_infos(void)
{
	set_input_first_name_();
	set_input_last_name_();
	set_input_nickname_();
	set_input_phone_number_();
	set_input_darkest_secret_();
	return (SUCCESS);
}

e_result Contact::set_input_first_name_(void)
{
	std::cout << "Input first name: ";
	first_name_ = get_input_trimmed_ws();
	return (SUCCESS);
}

e_result Contact::set_input_last_name_(void)
{
	std::cout << "Input last name: ";
	last_name_ = get_input_trimmed_ws();
	return (SUCCESS);
}

e_result Contact::set_input_nickname_(void)
{
	std::cout << "Input nickname: ";
	nickname_ = get_input_trimmed_ws();
	return (SUCCESS);
}

e_result Contact::set_input_phone_number_(void)
{
	std::cout << "Input phone number: ";
	phone_number_ = get_input_trimmed_ws();
	return (SUCCESS);
}

e_result Contact::set_input_darkest_secret_(void)
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
