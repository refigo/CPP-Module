/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:48:44 by mgo               #+#    #+#             */
/*   Updated: 2022/06/17 13:59:18 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

void	HumanB::attack(void) const
{
	std::cout << name_ \
		<< " attacks with their " \
		<< weapon_.getType() \
		<< '\n';
}

void	HumanB::setWeapon(Weapon& weapon)
{
	(void)weapon;
}

HumanB::HumanB(const std::string& name): name_(name)
{
}

HumanB::~HumanB(void)
{
}
