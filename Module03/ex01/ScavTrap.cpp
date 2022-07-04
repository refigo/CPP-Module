/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:45:34 by mgo               #+#    #+#             */
/*   Updated: 2022/07/04 12:30:32 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
	: ClapTrap(SCTR_DFLT_NM, SCTR_HP, SCTR_EP, SCTR_AD) {
	displayHdrMsg_();
	std::cout << "login!";
	std::cout << CLR_GRAY;
	std::cout << " (Default constructor Called)\n";
	std::cout << END_OF_CLR;
}

ScavTrap::ScavTrap(const std::string& name)
	: ClapTrap(name, SCTR_HP, SCTR_EP, SCTR_AD) {
	displayHdrMsg_();
	std::cout << "login!";
	std::cout << CLR_GRAY;
	std::cout << " (String name constructor Called)\n";
	std::cout << END_OF_CLR;
}

ScavTrap::ScavTrap(const ScavTrap& sctr) {
	*this = sctr;
	displayHdrMsg_();
	std::cout << "login!";
	std::cout << CLR_GRAY;
	std::cout << " (Copy constructor called)\n";
	std::cout << END_OF_CLR;
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
	std::cout << CLR_GRAY;
	std::cout << " (Destructor called)\n";
	std::cout << END_OF_CLR;
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
		std::cout << CLR_BYELLOW;
		std::cout << "can't attack because the user is already collapsed...\n";
		std::cout << END_OF_CLR;
	} else if (energy_point_ <= 0) {
		std::cout << CLR_BSKYBLUE;
		std::cout << "can't attack because of zero energy...\n";
		std::cout << END_OF_CLR;
	} else {
		std::cout << '\n';
	}
}

void	ScavTrap::guardGate(void) {
	displayHdrMsg_();
	displayClrdStr_(CLR_GREEN, "entered in Gate keeper mode..!\n");
}

void	ScavTrap::displayHdrMsg_() const {
	std::cout << "ScavTrap ";
	std::cout << "[ " << (this->getName()) << " ] ";
}
