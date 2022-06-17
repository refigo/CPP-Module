/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:34:36 by mgo               #+#    #+#             */
/*   Updated: 2022/06/17 14:03:31 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string&	Weapon::getType(void) const
{
	return (type_);
}

void	Weapon::setType(const std::string& type)
{
	type_ = type;
}

Weapon::Weapon(const std::string& type): type_(type)
{
}

Weapon::~Weapon(void)
{
}
