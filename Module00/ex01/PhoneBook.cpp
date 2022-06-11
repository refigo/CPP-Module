/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:24:09 by mgo               #+#    #+#             */
/*   Updated: 2022/06/11 13:53:12 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::set_input_cmd(void)
{
	std::string input;

	std::cout << B_WHITE;
	std::cout << "Please input command [ADD, SEARCH or EXIT]: ";
	std::cout << END_OF_COLOR;
	input = get_input_trimmed_ws();
	cmd_ = input;
}

bool PhoneBook::is_cmd_add(void)
{
	if (cmd_ == "ADD")
		return (true);
	else if (cmd_ == "add")
		return (true);
	else if (cmd_ == "a")
		return (true);
	return (false);
}

bool PhoneBook::is_cmd_search(void)
{
	if (cmd_ == "SEARCH")
		return (true);
	else if (cmd_ == "search")
		return (true);
	else if (cmd_ == "s")
		return (true);
	return (false);
}

bool PhoneBook::is_cmd_exit(void)
{
	if (cmd_ == "EXIT")
		return (true);
	else if (cmd_ == "exit")
		return (true);
	else if (cmd_ == "e")
		return (true);
	return (false);
}

void PhoneBook::save_contact(void)
{
	Contact contact;

	if (contact.set_inputs_infos() == false)
		return ;
	contacts_[current_contact_position_] = contact;
	if (current_contact_count_ != CONTACTS_MAX)
		current_contact_count_++;
	// todo: when max, display to override msg
	if (current_contact_position_ == CONTACTS_MAX - 1)
		current_contact_position_ = 0;
	else
		current_contact_position_++;
	std::cout << "\nSuccessfully saved!\n";
}

void PhoneBook::display_contacts_header_(void)
{
	std::cout << '|';
	std::cout << B_WHITE;
	display_str_with_width("index", 10);
	std::cout << END_OF_COLOR;
	std::cout << '|';
	std::cout << B_WHITE;
	display_str_with_width("first name", 10);
	std::cout << END_OF_COLOR;
	std::cout << '|';
	std::cout << B_WHITE;
	display_str_with_width("last name", 10);
	std::cout << END_OF_COLOR;
	std::cout << '|';
	std::cout << B_WHITE;
	display_str_with_width("nickname", 10);
	std::cout << END_OF_COLOR;
	std::cout << '|' << '\n';
}

void PhoneBook::display_contact_index_names_(int i)
{
	std::cout << '|' << std::setfill(' ') << std::setw(10) << i;
	std::cout << '|';
	display_str_with_width(contacts_[i].get_first_name(), 10);
	std::cout << '|';
	display_str_with_width(contacts_[i].get_last_name(), 10);
	std::cout << '|';
	display_str_with_width(contacts_[i].get_nickname(), 10);
	std::cout << '|' << '\n';
}

void	PhoneBook::get_input_index_and_display_contact_infos(void)
{
	int	index;

	while (true)
	{
		std::cout << B_WHITE << "\nInput index for more details" << END_OF_COLOR\
			 <<" (input not integer to go back)\n\t-> ";
		std::cin >> index;
		if (std::cin.good() == false)
		{
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(\
					std::numeric_limits<std::streamsize>::max(), '\n');
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
	if (current_contact_count_ == 0)
	{
		std::cout << "None of contacts...\n";
		return ;
	}
	display_border_line('=');
	display_contacts_header_();
	display_border_line('-');
	for (int i = 0; i < current_contact_count_; ++i)
		display_contact_index_names_(i);
	display_border_line('=');
	get_input_index_and_display_contact_infos();
}

PhoneBook::PhoneBook(void)
{
	current_contact_count_ = 0;
	current_contact_position_ = 0;
	std::cout << "Opened my awesome phone book!\n\n";
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Closed my awesome phone book...(contacts are lost forever)\n";
}
