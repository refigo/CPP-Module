/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:48:44 by mgo               #+#    #+#             */
/*   Updated: 2022/06/24 10:07:18 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

void	HumanB::attack(void) const
{
	std::cout << name_ << " attacks with his ";
	if (weapon_)
		std::cout << weapon_->getType() << '\n';
	else
		std::cout << "hand" << '\n';
}

void	HumanB::setWeapon(const Weapon& weapon)
{
	(void)weapon;
}

HumanB::HumanB(const std::string& name)
	: name_(name), weapon_(NULL) {}

HumanB::~HumanB(void) {}
