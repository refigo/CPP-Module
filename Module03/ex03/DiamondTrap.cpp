/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:37:26 by mgo               #+#    #+#             */
/*   Updated: 2022/07/04 17:29:01 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void	DiamondTrap::displayHdrMsg_(void) const {
	std::cout << "DiamondTrap ";
	std::cout << "[ " << name_ << " ] ";
}

DiamondTrap::DiamondTrap(void)
	: ClapTrap(DIATR_DFLT_NM, FRTR_HP, SCTR_EP, FRTR_AD)
	, name_(DIATR_DFLT_NM) {
	ClapTrap::name_ += "_clap_name";
	displayHdrMsg_();
	std::cout << "login!";
	displayClrdStr_(CLR_GRAY, " (Default constructor Called)\n");
}

DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap(name + "_clap_name", FRTR_HP, SCTR_EP, FRTR_AD)
	, name_(name) {
	displayHdrMsg_();
	std::cout << "login!";
	displayClrdStr_(CLR_GRAY, " (Default constructor Called)\n");
}

DiamondTrap::DiamondTrap(const DiamondTrap& diatr)
	: ClapTrap(DIATR_DFLT_NM, FRTR_HP, SCTR_EP, FRTR_AD)
	, name_(DIATR_DFLT_NM) {
	*this = diatr;
	displayHdrMsg_();
	std::cout << "login!";
	displayClrdStr_(CLR_GRAY, " (Copy constructor called)\n");
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
	displayClrdStr_(CLR_GRAY, " (Destructor called)\n");
}

const std::string&	DiamondTrap::getName(void) const {
	return (name_);
}

void	DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	displayHdrMsg_();
	std::cout << CLR_SKYBLUE;
	std::cout << "my name is <" << name_ << \
		"> and ClapTrap name is <" << ClapTrap::name_ << ">\n";
	std::cout << END_OF_CLR;
}
