/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:33:44 by mgo               #+#    #+#             */
/*   Updated: 2022/06/09 10:50:22 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;

	while (TRUE)
	{
		std::cout << "Please input cmd: "; // todo: replace to use method or set in set_input_cmd()
		phonebook.set_cmd(); // todo: rename to set_input_cmd()
		if (phonebook.is_cmd_add())
			phonebook.save_contact();
		else if (phonebook.is_cmd_search())
			phonebook.display_contacts();
		else if (phonebook.is_cmd_exit())
			break;
		else
			std::cout << "invalid cmd..\n";
	}
	//system("leaks test");
	return (0);
}
