/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:33:44 by mgo               #+#    #+#             */
/*   Updated: 2022/06/14 10:51:30 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void	display_invalid_cmd(void)
{
	std::cout << B_YELLOW \
			<< "\nInvalid command...\n" \
			<< END_OF_COLOR;
}

static int	quit_one_with_endl(void)
{
	std::cout << std::endl;
	return (1);
}

int	main(void)
{
	PhoneBook phonebook;

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
			display_invalid_cmd();
		if (is_not_cin_stream_good())
			return (quit_one_with_endl());
	}
	return (0);
}
