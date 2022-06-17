/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:55:08 by mgo               #+#    #+#             */
/*   Updated: 2022/06/17 11:19:08 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void	Zombie::announce(void) const
{
	std::cout << name_ << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setName(const std::string& name)
{
	name_ = name;
}

Zombie::Zombie(void)
{
}

Zombie::Zombie(const std::string &name): name_(name)
{
}

Zombie::~Zombie(void)
{
	std::cout << name_ << " is destroyed...\n";
}
