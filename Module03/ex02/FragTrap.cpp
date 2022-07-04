/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:20:02 by mgo               #+#    #+#             */
/*   Updated: 2022/07/04 14:50:27 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	FragTrap::displayHdrMsg_(void) const {
	std::cout << "FragTrap ";
	std::cout << "[ " << name_ << " ] ";
}

FragTrap::FragTrap(void)
	: ClapTrap(FRTR_DFLT_NM, FRTR_HP, FRTR_EP, FRTR_AD) {
	displayHdrMsg_();
	std::cout << "login!";
	displayClrdStr_(CLR_GRAY, " (Default constructor Called)\n");
}

FragTrap::FragTrap(const std::string& name)
	: ClapTrap(name, FRTR_HP, FRTR_EP, FRTR_AD) {
	displayHdrMsg_();
	std::cout << "login!";
	displayClrdStr_(CLR_GRAY, " (String name constructor Called)\n");
}

FragTrap::FragTrap(const FragTrap& frtr)
	: ClapTrap(FRTR_DFLT_NM, FRTR_HP, FRTR_EP, FRTR_AD) {
	*this = frtr;
	displayHdrMsg_();
	std::cout << "login!";
	displayClrdStr_(CLR_GRAY, " (Copy constructor called)\n");
}

FragTrap&	FragTrap::operator=(const FragTrap& frtr) {
	if (this != &frtr) {
		name_ = frtr.name_;
		hit_point_ = frtr.hit_point_;
		energy_point_ = frtr.energy_point_;
		attack_damage_ = frtr.attack_damage_;
	}
	return (*this);
}

FragTrap::~FragTrap(void) {
	displayHdrMsg_();
	std::cout << "logout...";
	displayClrdStr_(CLR_GRAY, " (Destructor called)\n");
}

void	FragTrap::highFivesGuys(void) {
	displayHdrMsg_();
	displayClrdStr_(CLR_PURPLE, "high five!!!\n");
}
