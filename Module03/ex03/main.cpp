/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 20:08:44 by mgo               #+#    #+#             */
/*   Updated: 2022/07/06 10:31:50 by mgo              ###   ########.fr       */
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
		test1 = test2;
	}
	std::cout << std::endl;
	{
		ClapTrap	man("Fighter");

		for (int i = 0; i < 5; ++i)
			man.attack("Enemy");
		for (int i = 0; i < 5; ++i)
			man.takeDamage(1);
		for (int i = 0; i < 5; ++i)
			man.beRepaired(1);
		man.attack("Enemy");
		man.beRepaired(1);
		std::cout << '\n';

		for (int i = 0; i < 4; ++i)
			man.takeDamage(4);
		man.attack("Enemy");
		man.beRepaired(1);
	}
	std::cout << "------------------------\n";
	std::cout << "Finish testing ClapTrap!\n";
	std::cout << "------------------------\n";
	std::cout << std::endl;
	

	// ScavTrap
	std::cout << "--------------------\n";
	std::cout << "Start SCTR!!!\n";
	std::cout << "--------------------\n";
	{
		ScavTrap	test1;
		ScavTrap	test2("test2");
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

		ScavTrap	test3(test1);
		test3.attack("dummy");
		std::cout << '\n';
	}
	std::cout << std::endl;
	{
		ScavTrap	test;

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
	}
	

	// FragTrap
	
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

	return (0);
}
