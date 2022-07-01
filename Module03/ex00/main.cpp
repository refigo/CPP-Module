/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 20:08:44 by mgo               #+#    #+#             */
/*   Updated: 2022/07/01 14:25:37 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	{
		ClapTrap	test1;
		ClapTrap	test2("test2");
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

		ClapTrap	test3(test1);
		test3.attack("dummy");
		std::cout << '\n';
	}
	
	std::cout << std::endl;

	{
		ClapTrap	man("Fighter");

		for (int i = 0; i < 4; ++i)
			man.attack("Enemy");
		for (int i = 0; i < 5; ++i)
			man.takeDamage(1);
		for (int i = 0; i < 6; ++i)
			man.beRepaired(1);
		man.attack("Enemy");
		man.beRepaired(1);

		std::cout << '\n';

		for (int i = 0; i < 4; ++i)
			man.takeDamage(4);
		man.attack("Enemy");
		man.beRepaired(1);
	}

	return (0);
}
