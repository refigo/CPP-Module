/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:33:44 by mgo               #+#    #+#             */
/*   Updated: 2022/06/10 16:53:58 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;

	while (true)
	{
		phonebook.set_input_cmd();
		if (phonebook.is_cmd_add())
			phonebook.save_contact();
		else if (phonebook.is_cmd_search())
			phonebook.display_contacts();
		else if (phonebook.is_cmd_exit())
			break;
		else
		{
			std::cout << '\n';
			if (std::cin.eof() || std::cin.bad())
				return (1);
			else
				std::cout << "\tinvalid cmd..\n\n";
		}
	}
	//system("leaks test");
	return (0);
}
