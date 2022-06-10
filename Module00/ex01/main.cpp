/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:33:44 by mgo               #+#    #+#             */
/*   Updated: 2022/06/10 11:17:12 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;

	phonebook.get_input_index_and_display_contact_infos();
	exit(0);
	while (TRUE)
	{
		phonebook.set_input_cmd();
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
