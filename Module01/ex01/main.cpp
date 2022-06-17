/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 11:22:41 by mgo               #+#    #+#             */
/*   Updated: 2022/06/17 11:30:58 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int		num_horde;

	num_horde = 10;
	horde = zombieHorde(num_horde, "horde");
	if (horde == NULL)
		return (1);
	for (int i = 0; i < num_horde; ++i)
	{
		horde[i].announce();
	}
	delete[] horde;
	//system("leaks horde");
	return (0);
}
