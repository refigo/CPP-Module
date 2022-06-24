/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:55:08 by mgo               #+#    #+#             */
/*   Updated: 2022/06/24 10:17:35 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void	Zombie::announce(void) const
{
	std::cout << name_ << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(const std::string &name): name_(name) {}

Zombie::~Zombie(void)
{
	std::cout << name_ << " is destroyed...\n";
}
