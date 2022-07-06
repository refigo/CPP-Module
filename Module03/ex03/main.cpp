/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 20:08:44 by mgo               #+#    #+#             */
/*   Updated: 2022/07/06 12:52:10 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main(void)
{
	// ClapTrap
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
	

	// ScavTrap
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

		user.takeDamage(0);
		user.takeDamage(-1);
		
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
		for (int i = 0; i < 4; ++i)
			user.takeDamage(25);
		user.attack("Enemy");
		user.beRepaired(1);

	}
	std::cout << "------------------------\n";
	std::cout << "Finish testing ScavTrap!\n";
	std::cout << "------------------------\n";


	// FragTrap
	/*
	std::cout << "--------------------\n";
	std::cout << "Start FRTR!!!\n";
	std::cout << "--------------------\n";
	{
		FragTrap	test1;
		FragTrap	test2("test2");
		std::cout << '\n';
		
		test1.attack("dummy");
		std::cout << '\n';

		test2.attack("dummy");
		test2.takeDamage(4);
		test2.beRepaired(4);
		std::cout << '\n';

		test1 = test2;
		test1.attack("dummy");
		std::cout << '\n';

		FragTrap	test3(test1);
		test3.attack("dummy");
		std::cout << '\n';
	}
	std::cout << std::endl;
	{
		FragTrap	test;

		test.attack("test_enemy");

		for (int i = 0; i < 5; ++i)
			test.attack("Enemy");
		for (int i = 0; i < 5; ++i)
			test.takeDamage(1);
		for (int i = 0; i < 5; ++i)
			test.beRepaired(1);
		test.attack("Enemy");
		test.beRepaired(1);

		std::cout << '\n';

		for (int i = 0; i < 4; ++i)
			test.takeDamage(4);
		test.attack("Enemy");
		test.beRepaired(1);

		test.highFivesGuys();
	}
	

	// DiamondTrap
	std::cout << "--------------------\n";
	std::cout << "Start DIATR!!!\n";
	std::cout << "--------------------\n";
	{
		DiamondTrap	test1;
		DiamondTrap	test2("test2");
		std::cout << '\n';
		
		test1.attack("dummy");
		std::cout << '\n';

		test2.attack("dummy");
		test2.takeDamage(4);
		test2.beRepaired(4);
		std::cout << '\n';

		test1 = test2;
		test1.attack("dummy");
		std::cout << '\n';

		DiamondTrap	test3(test1);
		test3.attack("dummy");
		std::cout << '\n';
	}
	std::cout << std::endl;
	{
		DiamondTrap	test;

		test.attack("test_enemy");

		for (int i = 0; i < 5; ++i)
			test.attack("Enemy");
		for (int i = 0; i < 5; ++i)
			test.takeDamage(1);
		for (int i = 0; i < 5; ++i)
			test.beRepaired(1);
		test.attack("Enemy");
		test.beRepaired(1);

		std::cout << '\n';

		for (int i = 0; i < 4; ++i)
			test.takeDamage(4);
		test.attack("Enemy");
		test.beRepaired(1);

		test.guardGate();
		test.highFivesGuys();

		test.whoAmI();
	}
	*/
	return (0);
}
