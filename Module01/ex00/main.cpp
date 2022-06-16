/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:55:11 by mgo               #+#    #+#             */
/*   Updated: 2022/06/16 17:55:11 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string	test_string("test");
	Zombie	test(test_string);
	test.announce();

	std::string	random_string("random");
	randomChump(random_string);

	std::string	new_string("ptr");
	Zombie	*new_zom = newZombie(new_string);
	new_zom->announce();
	delete new_zom;

	return (0);
}
