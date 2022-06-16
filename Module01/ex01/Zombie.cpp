/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:55:08 by mgo               #+#    #+#             */
/*   Updated: 2022/06/16 17:55:09 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name_;
	std::cout << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string name): name_(name)
{
}

Zombie::~Zombie(void)
{
	std::cout << name_ << " is destroyed...\n";
}
