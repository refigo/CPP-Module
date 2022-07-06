/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 20:08:44 by mgo               #+#    #+#             */
/*   Updated: 2022/07/06 14:40:04 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
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
	

	// test ScavTrap
	std::cout << "-----------------------\n";
	std::cout << "Start testing ScavTrap!\n";
	std::cout << "-----------------------\n";
	{
		ScavTrap	test1;
		ScavTrap	test2("testingConstructors");
		ScavTrap	test3(test2);
		test1 = test3;
	}
	std::cout << std::endl;
	{
		ScavTrap	user("Fighter");
		
		for (int i = 0; i < 5; ++i)
			user.takeDamage(1);
		for (int i = 0; i < 5; ++i)
			user.attack("Enemy");
		for (int i = 0; i < 5; ++i)
			user.beRepaired(1);
		user.attack("Enemy");
		user.beRepaired(1);
		std::cout << '\n';

		user.guardGate();
		for (int i = 0; i < 5; ++i)
			user.takeDamage(26);
		user.attack("Enemy");
		user.beRepaired(1);
	}
	std::cout << "------------------------\n";
	std::cout << "Finish testing ScavTrap!\n";
	std::cout << "------------------------\n";
	std::cout << std::endl;


	// test FragTrap
	std::cout << "-----------------------\n";
	std::cout << "Start testing FragTrap!\n";
	std::cout << "-----------------------\n";
	{
		FragTrap	test1;
		FragTrap	test2("testingConstructors");
		FragTrap	test3(test2);
		test1 = test3;
	}
	std::cout << std::endl;
	{
		FragTrap	user("Fighter");
		
		for (int i = 0; i < 5; ++i)
			user.takeDamage(1);
		for (int i = 0; i < 5; ++i)
			user.attack("Enemy");
		for (int i = 0; i < 5; ++i)
			user.beRepaired(1);
		user.attack("Enemy");
		user.beRepaired(1);
		std::cout << '\n';

		user.highFivesGuys();
		for (int i = 0; i < 5; ++i)
			user.takeDamage(26);
		user.attack("Enemy");
		user.beRepaired(1);
	}
	std::cout << "------------------------\n";
	std::cout << "Finish testing FragTrap!\n";
	std::cout << "------------------------\n";
	std::cout << std::endl;
	

	// test DiamondTrap
	std::cout << "--------------------------\n";
	std::cout << "Start testing DiamondTrap!\n";
	std::cout << "--------------------------\n";
	{
		DiamondTrap	test1;
		DiamondTrap	test2("testingConstructors");
		DiamondTrap	test3(test2);
		test1 = test3;
	}
	std::cout << std::endl;
	{
		DiamondTrap	user("Fighter");

		for (int i = 0; i < 5; ++i)
			user.takeDamage(1);
		for (int i = 0; i < 5; ++i)
			user.attack("Enemy");
		for (int i = 0; i < 5; ++i)
			user.beRepaired(1);
		user.attack("Enemy");
		user.beRepaired(1);
		std::cout << '\n';

		user.guardGate();
		user.highFivesGuys();
		user.whoAmI();
		for (int i = 0; i < 5; ++i)
			user.takeDamage(26);
		user.attack("Enemy");
		user.beRepaired(1);
	}
	std::cout << "---------------------------\n";
	std::cout << "Finish testing DiamondTrap!\n";
	std::cout << "---------------------------\n";
	std::cout << std::endl;

	return (0);
}
