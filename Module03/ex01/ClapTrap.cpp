/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:29:32 by mgo               #+#    #+#             */
/*   Updated: 2022/07/04 11:09:31 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	: name_(CLTR_DFLT_NM)
	, hit_point_(CLTR_HP)
	, energy_point_(CLTR_EP)
	, attack_damage_(CLTR_AD) 
	, maxHP_(CLTR_HP) {
	displayHdrMsg_();
	std::cout << "login!";
	displayClrdStr_(CLR_GRAY, " (Default constructor Called)\n");
}

ClapTrap::ClapTrap(const std::string& name)
	: name_(name)
	, hit_point_(CLTR_HP)
	, energy_point_(CLTR_EP)
	, attack_damage_(CLTR_AD) 
	, maxHP_(CLTR_HP) {
	displayHdrMsg_();
	std::cout << "login!";
	displayClrdStr_(CLR_GRAY, " (String name constructor Called)\n");
}

// consider...
ClapTrap::ClapTrap(const ClapTrap& cltr)
	: name_(CLTR_DFLT_NM)
	, hit_point_(CLTR_HP)
	, energy_point_(CLTR_EP)
	, attack_damage_(CLTR_AD) 
	, maxHP_(CLTR_HP) {
	*this = cltr;
	displayHdrMsg_();
	std::cout << "login!";
	displayClrdStr_(CLR_GRAY, " (Copy constructor called)\n");
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& cltr) {
	if (this != &cltr) {
		this->name_ = cltr.getName();
		this->hit_point_ = cltr.getHitPoint();
		this->energy_point_ = cltr.getEnergyPoint();
		this->attack_damage_ = cltr.getAttackDamage();
	}
	return (*this);
}

ClapTrap::ClapTrap(const std::string& name, \
				int hp = CLTR_HP, int ep = CLTR_EP, int ad = CLTR_AD)
	: name_(name)
	, hit_point_(hp)
	, energy_point_(ep)
	, attack_damage_(ad) 
	, maxHP_(hp) {
	displayHdrMsg_();
	std::cout << "login!";
	displayClrdStr_(CLR_GRAY, " (Attributes constructor called)\n");
}

ClapTrap::~ClapTrap(void) {
	displayHdrMsg_();
	std::cout << "logout...";
	displayClrdStr_(CLR_GRAY, " (Destructor called)\n");
}

void	ClapTrap::attack(const std::string& target) {
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

void	ClapTrap::takeDamage(unsigned int amount) {
	displayHdrMsg_();
	if (hit_point_ > 0) {
		std::cout << CLR_BRED;
		std::cout << "takes " \
			<< amount << " points of damage!";
		std::cout << END_OF_CLR;
		if (hit_point_ < amount)
			hit_point_ = 0;
		else
			hit_point_ -= amount;
		std::cout << " (remained Health: " << hit_point_ << ")";
		if (hit_point_ == 0)
		{
			std::cout << CLR_BPURPLE;
			std::cout << " [ " << name_ << " ] collapsed..";
			std::cout << END_OF_CLR;
		}
		std::cout << "\n";
	} else {
		displayClrdStr_(CLR_BYELLOW, \
			"is already collapsed, so not taking damage...\n");
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	displayHdrMsg_();
	if ((energy_point_ > 0) && (0 < hit_point_) && (hit_point_ < maxHP_)) {
		std::cout << CLR_BGREEN;
		std::cout << "is repaired " \
			<< amount << " points of health!";
		std::cout << END_OF_CLR;
		if (amount < (maxHP_ - hit_point_))
			hit_point_ += amount;
		else
			hit_point_ = maxHP_;
		std::cout << " (remained Health: " << hit_point_ << ',';
		--(energy_point_);
		std::cout << " remained Energy: " << energy_point_ << ")\n";
	} else if (hit_point_ <= 0) {
		displayClrdStr_(CLR_BYELLOW, \
			"can't repair because the user is already collapsed...\n");
	} else if (energy_point_ <= 0) {
		displayClrdStr_(CLR_BSKYBLUE, \
			"can't repair because of zero energy...\n");
	} else if (hit_point_ >= maxHP_) {
		displayClrdStr_(CLR_BWHITE, \
			"has max health, so don't need to be repaired!\n");
	} else {
		std::cout << '\n';
	}
}

const std::string&	ClapTrap::getName(void) const {
	return (name_);
}

unsigned int	ClapTrap::getHitPoint(void) const {
	return (hit_point_);
}

unsigned int	ClapTrap::getEnergyPoint(void) const {
	return (energy_point_);
}

unsigned int	ClapTrap::getAttackDamage(void) const {
	return (attack_damage_);
}

void	ClapTrap::setName(const std::string& name) {
	name_ = name;
}

void	ClapTrap::setHitPoint(unsigned int hp) {
	hit_point_ = hp;
}

void	ClapTrap::setEnergyPoint(unsigned int ep) {
	energy_point_ = ep;
}

void	ClapTrap::setAttackDamage(unsigned int ad) {
	attack_damage_ = ad;
}

void	ClapTrap::displayHdrMsg_(void) const {
	std::cout << "ClapTrap ";
	std::cout << "[ " << name_ << " ] ";
}

void	ClapTrap::displayClrdStr_(const char *clr, const char *str) const {
	std::cout << clr << str << END_OF_CLR;
}
