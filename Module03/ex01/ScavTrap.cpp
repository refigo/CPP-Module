/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:45:34 by mgo               #+#    #+#             */
/*   Updated: 2022/07/01 14:43:51 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
	: ClapTrap() {
	displayHdrMsg();
	std::cout << "login!";
	std::cout << CLR_GRAY;
	std::cout << " (Default constructor Called)\n";
	std::cout << END_OF_CLR;
}

ScavTrap::ScavTrap(const std::string& name)
	: ClapTrap(name) {
	displayHdrMsg();
	std::cout << "login!";
	std::cout << CLR_GRAY;
	std::cout << " (String name constructor Called)\n";
	std::cout << END_OF_CLR;
}

ScavTrap::ScavTrap(const ScavTrap& sctr)
	: ClapTrap() {

	displayHdrMsg();
	std::cout << "login!";
	std::cout << CLR_GRAY;
	std::cout << " (Copy constructor called)\n";
	std::cout << END_OF_CLR;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& sctr) {
	/*
	if (this != &sctr) {
		this->name_ = cltr.getName();
		this->hit_point_ = cltr.getHitPoint();
		this->energy_point_ = cltr.getEnergyPoint();
		this->attack_damage_ = cltr.getAttackDamage();
	}
	return (*this);
	*/
}

ScavTrap::~ScavTrap(void)
{

}

void	attack(const std::string& target)
{

}

void	guardGate(void)
{
	
}

void	ScavTrap::displayHdrMsg() const {
	std::cout << "ScavTrap User ";
	std::cout << "[ " << (this->getName()) << " ] ";
}
