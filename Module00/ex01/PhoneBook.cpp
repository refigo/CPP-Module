/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:24:09 by mgo               #+#    #+#             */
/*   Updated: 2022/06/14 11:53:49 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::set_input_cmd(void)
{
	std::string input;

	std::cout << B_WHITE;
	std::cout << "\nPlease input command [ADD, SEARCH or EXIT]: ";
	std::cout << END_OF_COLOR;
	input = set_str_lower(get_input_trimmed_ws());
	cmd_ = input;
}

bool PhoneBook::is_cmd_add(void) const
{
	if (cmd_ == "add")
		return (true);
	else if (cmd_ == "a")
		return (true);
	else ;
	return (false);
}

bool PhoneBook::is_cmd_search(void) const
{
	if (cmd_ == "search")
		return (true);
	else if (cmd_ == "s")
		return (true);
	else ;
	return (false);
}

bool PhoneBook::is_cmd_exit(void) const
{
	if (cmd_ == "exit")
		return (true);
	else if (cmd_ == "e")
		return (true);
	else ;
	return (false);
}

void PhoneBook::save_contact(void)
{
	Contact contact;

	if (current_contact_count_ == CONTACTS_MAX)
	{
		std::cout << B_BLUE \
			<< "\nPhone book is full.. \n" \
			<< "so override to index [" \
			<< current_contact_position_ << "]" << END_OF_COLOR;
	}
	if (contact.set_inputs_infos(current_contact_position_) == false)
		return ;
	contacts_[current_contact_position_] = contact;
	if (current_contact_count_ != CONTACTS_MAX)
		++current_contact_count_;
	if (current_contact_position_ == CONTACTS_MAX - 1)
		current_contact_position_ = 0;
	else
		++current_contact_position_;
	std::cout << B_GREEN << "\nSuccessfully saved!\n" << END_OF_COLOR;
}

void PhoneBook::display_contacts_header_(void) const
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

void PhoneBook::display_contact_index_names_(int i) const
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

void	PhoneBook::get_input_index_and_display_contact_infos(void) const
{
	int	index (0);

	while (true)
	{
		std::cout << B_WHITE \
			<< "\nInput index for more details" << END_OF_COLOR \
			<<" (input not integer to go back)\n\t-> ";
		std::cin >> index;
		if (std::cin.good() == false)
		{
			if (std::cin.fail())
				std::cin.clear();
			std::cin.ignore(\
				std::numeric_limits<std::streamsize>::max(), '\n');
			return ;
		}
		else if ((0 <= index) && (index < current_contact_count_))
			contacts_[index].display_infos();
		else
			std::cout << B_YELLOW << "\n\tInvalid index...\n" << END_OF_COLOR;
	}
}

void PhoneBook::display_and_search_contacts(void) const
{
	if (current_contact_count_ == 0)
	{
		std::cout << B_YELLOW << "\nNone of contacts...\n" << END_OF_COLOR;
		return ;
	}
	std::cout << '\n';
	display_border_line('=');
	display_contacts_header_();
	display_border_line('-');
	for (int i = 0; i < current_contact_count_; ++i)
		display_contact_index_names_(i);
	display_border_line('=');
	get_input_index_and_display_contact_infos();
}

PhoneBook::PhoneBook(void)
	: current_contact_count_(0), current_contact_position_(0)
{
	std::cout << B_RED << "\nOpened " \
		<< B_YELLOW << "my " \
		<< B_GREEN << "awesome " \
		<< B_BLUE << "phone " \
		<< B_PURPLE << "book!\n" \
		<< END_OF_COLOR;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "\nClosed my awesome phone book..." \
		<< " (contacts are lost forever)\n";
}
