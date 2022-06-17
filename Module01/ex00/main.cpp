/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:55:11 by mgo               #+#    #+#             */
/*   Updated: 2022/06/17 11:24:09 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	// stack
	Zombie	zombie_main("stack_main");
	zombie_main.announce();

	// heap
	Zombie	*zombie_heap = newZombie("heap");
	zombie_heap->announce();

	// call function stack
	randomChump("stack_random");

	delete zombie_heap;	

	//system("leaks zombie");
	return (0);
}
