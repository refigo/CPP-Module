/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:37:26 by mgo               #+#    #+#             */
/*   Updated: 2022/07/06 14:36:48 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void	DiamondTrap::displayHdrMsg_(void) const {
	std::cout << "DiamondTrap ";
	std::cout << "[ " << name_ << " ] ";
}

DiamondTrap::DiamondTrap(void)
	: ClapTrap(DIATR_DFLT_CLTR_NM, FRTR_HP, SCTR_EP, FRTR_AD)
	, name_(DIATR_DFLT_NM) {
	displayHdrMsg_();
	std::cout << "login!";
	displayClrdMsg_(CLR_GRAY, " (Default constructor called)\n");
}

DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap(name + "_clap_name", FRTR_HP, SCTR_EP, FRTR_AD)
	, name_(name) {
	displayHdrMsg_();
	std::cout << "login!";
	displayClrdMsg_(CLR_GRAY, " (String name constructor called)\n");
}

DiamondTrap::DiamondTrap(const DiamondTrap& diatr)
	: ClapTrap(DIATR_DFLT_CLTR_NM, FRTR_HP, SCTR_EP, FRTR_AD)
	, name_(DIATR_DFLT_NM) {
	*this = diatr;
	displayHdrMsg_();
	std::cout << "login!";
	displayClrdMsg_(CLR_GRAY, " (Copy constructor called)\n");
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& diatr) {
	if (this != &diatr) {
		name_ = diatr.name_;
		ClapTrap::name_ = diatr.ClapTrap::name_;
		hit_point_ = diatr.hit_point_;
		energy_point_ = diatr.energy_point_;
		attack_damage_ = diatr.attack_damage_;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap(void) {
	displayHdrMsg_();
	std::cout << "logout...";
	displayClrdMsg_(CLR_GRAY, " (Destructor called)\n");
}

const std::string&	DiamondTrap::getName(void) const {
	return (name_);
}

void	DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) {
	displayHdrMsg_();
	if ((hit_point_ > 0) && (energy_point_ > 0)) {
		std::cout << CLR_SKYBLUE;
	std::cout << "says that \"My name is [ " << name_ << \
		" ] and ClapTrap name is [ " << ClapTrap::name_ << " ].\"\n";
	std::cout << END_OF_CLR;
	} else if (hit_point_ <= 0) {
		displayClrdMsg_(CLR_BYELLOW, \
			"can't do anything because the user is already collapsed...\n");
	} else if (energy_point_ <= 0) {
		displayClrdMsg_(CLR_BSKYBLUE, \
			"can't do anything because the user has no energy...\n");
	} else {
		std::cout << '\n';
	}
}
