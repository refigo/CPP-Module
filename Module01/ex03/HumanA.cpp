/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:44:53 by mgo               #+#    #+#             */
/*   Updated: 2022/06/24 12:43:56 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

void	HumanA::attack(void) const
{
	std::cout << name_ << " attacks with his ";
	std::cout << weapon_.getType() << '\n';
}

HumanA::HumanA(const std::string& name, const Weapon& weapon)
	: name_(name), weapon_(weapon) {}

HumanA::~HumanA(void) {}
