/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:45:34 by mgo               #+#    #+#             */
/*   Updated: 2022/07/06 12:48:38 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	ScavTrap::displayHdrMsg_(void) const {
	std::cout << "ScavTrap ";
	std::cout << "[ " << name_ << " ] ";
}

ScavTrap::ScavTrap(void)
	: ClapTrap(SCTR_DFLT_NM, SCTR_HP, SCTR_EP, SCTR_AD) {
	displayHdrMsg_();
	std::cout << "login!";
	displayClrdStr_(CLR_GRAY, " (Default constructor Called)\n");
}

ScavTrap::ScavTrap(const std::string& name)
	: ClapTrap(name, SCTR_HP, SCTR_EP, SCTR_AD) {
	displayHdrMsg_();
	std::cout << "login!";
	displayClrdStr_(CLR_GRAY, " (String name constructor Called)\n");
}

ScavTrap::ScavTrap(const ScavTrap& sctr)
	: ClapTrap(SCTR_DFLT_NM, SCTR_HP, SCTR_EP, SCTR_AD) {
	*this = sctr;
	displayHdrMsg_();
	std::cout << "login!";
	displayClrdStr_(CLR_GRAY, " (Copy constructor called)\n");
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& sctr) {
	if (this != &sctr) {
		name_ = sctr.name_;
		hit_point_ = sctr.hit_point_;	
		energy_point_ = sctr.energy_point_;
		attack_damage_ = sctr.attack_damage_;
	}
	return (*this);
}

ScavTrap::~ScavTrap(void) {
	displayHdrMsg_();
	std::cout << "logout...";
	displayClrdStr_(CLR_GRAY, " (Destructor called)\n");
}

void	ScavTrap::attack(const std::string& target) {
	displayHdrMsg_();
	if ((energy_point_ > 0) && (hit_point_ > 0)) {
		std::cout << CLR_BBLUE;
		std::cout << "attacks [ " << target << \
			" ], causing " << attack_damage_ << " points of damage!";
		std::cout << END_OF_CLR;
		--(energy_point_);
		std::cout << " (remained Energy: " << energy_point_ << ")\n";
	} else if (hit_point_ <= 0){
		displayClrdStr_(CLR_BYELLOW, \
			"can't attack because the user is already collapsed...\n");
	} else if (energy_point_ <= 0) {
		displayClrdStr_(CLR_BSKYBLUE, \
			"can't attack because of zero energy...\n");
	} else {
		std::cout << '\n';
	}
}

void	ScavTrap::guardGate(void) {
	displayHdrMsg_();
	if (hit_point_ > 0)
		displayClrdStr_(CLR_GREEN, "enters in Gate keeper mode..!\n");
	else
		displayClrdStr_(CLR_BYELLOW, \
			"can't do anything because the user is already collapsed...\n");
}
