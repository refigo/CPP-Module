/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 20:08:44 by mgo               #+#    #+#             */
/*   Updated: 2022/06/24 20:33:35 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	{
		ClapTrap	test1;
		ClapTrap	test2("test2");
		ClapTrap	test3(test2);
		test1.attack("dummy");
		test1 = test2;

		test1.attack("dummy");
		test2.takeDamage(4);
		test2.beRepaired(4);
	}

	ClapTrap	man("Fighter");


	return (0);
}
