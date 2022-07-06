/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 20:08:44 by mgo               #+#    #+#             */
/*   Updated: 2022/07/06 14:52:53 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	// test ClapTrap
	std::cout << "-----------------------\n";
	std::cout << "Start testing ClapTrap!\n";
	std::cout << "-----------------------\n";
	{
		ClapTrap	test1;
		ClapTrap	test2("testingConstructors");
		ClapTrap	test3(test2);
		test1 = test3;
	}
	std::cout << std::endl;
	{
		ClapTrap	user("Fighter");

		for (int i = 0; i < 5; ++i)
			user.takeDamage(1);
		for (int i = 0; i < 5; ++i)
			user.attack("Enemy");
		for (int i = 0; i < 5; ++i)
			user.beRepaired(1);
		user.attack("Enemy");
		user.beRepaired(1);
		std::cout << '\n';

		for (int i = 0; i < 4; ++i)
			user.takeDamage(4);
		user.attack("Enemy");
		user.beRepaired(1);
	}
	std::cout << "------------------------\n";
	std::cout << "Finish testing ClapTrap!\n";
	std::cout << "------------------------\n";
	std::cout << std::endl;

	return (0);
}
