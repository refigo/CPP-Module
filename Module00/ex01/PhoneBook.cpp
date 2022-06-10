/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:24:09 by mgo               #+#    #+#             */
/*   Updated: 2022/06/10 16:48:48 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::set_input_cmd(void)
{
	std::string input;

	std::cout << "Please input cmd: ";
	input = get_input_trimmed_ws();
	cmd_ = input;
}

e_bool PhoneBook::is_cmd_add(void)
{
	if (cmd_ == "ADD")
		return (TRUE);
	else if (cmd_ == "add")
		return (TRUE);
	else if (cmd_ == "a")
		return (TRUE);
	return (FALSE);
}

e_bool PhoneBook::is_cmd_search(void)
{
	if (cmd_ == "SEARCH")
		return (TRUE);
	else if (cmd_ == "search")
		return (TRUE);
	else if (cmd_ == "s")
		return (TRUE);
	return (FALSE);
}

e_bool PhoneBook::is_cmd_exit(void)
{
	if (cmd_ == "EXIT")
		return (TRUE);
	else if (cmd_ == "exit")
		return (TRUE);
	else if (cmd_ == "e")
		return (TRUE);
	/*
	else if (cmd_ == "")
		return (TRUE);
	*/
	return (FALSE);
}

void PhoneBook::save_contact(void)
{
	Contact contact;

	contact.set_inputs_infos();
	contacts_[current_contact_position_] = contact;
	if (current_contact_count_ != CONTACTS_MAX)
		current_contact_count_++;
	if (current_contact_position_ == CONTACTS_MAX - 1)
		current_contact_position_ = 0;
	else
		current_contact_position_++;
	std::cout << "Successfully saved!\n";
}

// considering to move...
static void	print_str_with_width(std::string str, int width)
{
	if (width == 0)
		return;
	else if (str.length() > width)
		std::cout << str.substr(0, width - 1) << ".";
	else
		std::cout << std::setw(width) << str;
}

void PhoneBook::print_contacts_header_(void)
{
	std::cout << '|';
	std::cout << B_WHITE;
	print_str_with_width("index", 10);
	std::cout << END_OF_COLOR;
	std::cout << '|';
	std::cout << B_WHITE;
	print_str_with_width("first name", 10);
	std::cout << END_OF_COLOR;
	std::cout << '|';
	std::cout << B_WHITE;
	print_str_with_width("last name", 10);
	std::cout << END_OF_COLOR;
	std::cout << '|';
	std::cout << B_WHITE;
	print_str_with_width("nickname", 10);
	std::cout << END_OF_COLOR;
	std::cout << '|' << '\n';
}

void PhoneBook::print_contact_index_names_(int i)
{
	std::cout << '|' << std::setfill(' ') << std::setw(10) << i;
	std::cout << '|';
	print_str_with_width(contacts_[i].get_first_name(), 10);
	std::cout << '|';
	print_str_with_width(contacts_[i].get_last_name(), 10);
	std::cout << '|';
	print_str_with_width(contacts_[i].get_nickname(), 10);
	std::cout << '|' << '\n';
}

// considering to move...
static void	print_border_line(char c)
{
	std::cout << std::setfill(c);
	std::cout << std::setw(46) << '\n';
	std::cout << std::setfill(' ');
}

void	PhoneBook::get_input_index_and_display_contact_infos(void)
{
	int	index;

	while (true)
	{
		std::cout << B_WHITE << "\nInput index" << END_OF_COLOR\
			 <<" (input not integer to go back)\n\t-> ";
		std::cin >> index;
		if (std::cin.good() == false)
		{
			if (std::cin.fail() == true)
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			std::cout << std::endl;
			return ;
		}
		else if ((0 <= index) && (index < current_contact_count_))
			contacts_[index].display_infos();
		else
			std::cout << "\tInvalid index...\n";
	}
}

void PhoneBook::display_contacts(void)
{
	int index;

	if (current_contact_count_ == 0)
	{
		std::cout << "None of contacts...\n";
		return ;
	}
	print_border_line('=');
	print_contacts_header_();
	print_border_line('-');
	for (int i = 0; i < current_contact_count_; ++i)
		print_contact_index_names_(i);
	print_border_line('=');
	get_input_index_and_display_contact_infos();
}

PhoneBook::PhoneBook(void)
{
	current_contact_count_ = 0;
	current_contact_position_ = 0;
	std::cout << "Opened my awesome phone book!\n";
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Closed my awesome phone book...\n";
}
