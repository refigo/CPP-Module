/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 09:53:43 by mgo               #+#    #+#             */
/*   Updated: 2022/06/17 11:21:41 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*horde;

	horde = new (std::nothrow) Zombie[N];
	if (horde == NULL)
	{
		std::cout << "malloc failed\n";
		return (NULL);
	}
	for (int i = 0; i < N; ++i)
		horde[i].setName(name);
	return (horde);
}
