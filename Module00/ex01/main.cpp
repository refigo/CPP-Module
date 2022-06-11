/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:33:44 by mgo               #+#    #+#             */
/*   Updated: 2022/06/11 17:17:09 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;

	// When EOF inputed, must exit.
	while (true)
	{
		phonebook.set_input_cmd();
		if (phonebook.is_cmd_add())
			phonebook.save_contact();
		else if (phonebook.is_cmd_search())
			phonebook.display_and_search_contacts();
		else if (phonebook.is_cmd_exit())
			break;
		else
			std::cout << "\nInvalid command...\n\n";
		if (is_not_cin_stream_good())
		{
			std::cout << '\n';
			return (1);
		}
	}
	//system("leaks test");
	return (0);
}
