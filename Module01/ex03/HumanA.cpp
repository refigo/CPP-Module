/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:44:53 by mgo               #+#    #+#             */
/*   Updated: 2022/06/17 13:58:16 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

void	HumanA::attack(void) const
{
	std::cout << name_ \
		<< " attacks with their " \
		<< weapon_.getType() \
		<< '\n';
}

HumanA::HumanA(const std::string& name, Weapon& weapon)
	: name_(name), weapon_(weapon)
{
}

HumanA::~HumanA(void)
{
}
