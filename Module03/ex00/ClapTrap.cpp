/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:29:32 by mgo               #+#    #+#             */
/*   Updated: 2022/06/30 12:39:05 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	: name_(DFLT_NM), hit_point_(10), energy_point_(10), attack_damage_(0) {
	displayHdrMsg();
	std::cout << "login!";
	std::cout << CLR_BLACK;
	std::cout << " (Default constructor Called)\n";
	std::cout << END_OF_CLR;
}

ClapTrap::ClapTrap(const std::string& name)
	: name_(name), hit_point_(10), energy_point_(10), attack_damage_(0) {
	displayHdrMsg();
	std::cout << "login!";
	std::cout << CLR_BLACK;
	std::cout << " (String name constructor Called)\n";
	std::cout << END_OF_CLR;
}

ClapTrap::ClapTrap(const ClapTrap& cltr)
	: name_(DFLT_NM), hit_point_(10), energy_point_(10), attack_damage_(0) {
	*this = cltr;
	displayHdrMsg();
	std::cout << "login!";
	std::cout << CLR_BLACK;
	std::cout << " (Copy constructor called)\n";
	std::cout << END_OF_CLR;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& cltr) {
	if (this != &cltr) {
		displayHdrMsg();
		std::cout << "is reproduced ";
		this->name_ = cltr.getName();
		this->hit_point_ = cltr.getHitPoint();
		this->energy_point_ = cltr.getEnergyPoint();
		this->attack_damage_ = cltr.getAttackDamage();
		std::cout << "by [ " << cltr.getName() << " ]";
		std::cout << CLR_BLACK;
		std::cout << " (Copy assignment operator called)\n";
		std::cout << END_OF_CLR;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void) {
	displayHdrMsg();
	std::cout << "logout...";
	std::cout << CLR_BLACK;
	std::cout << " (Destructor called)\n";
	std::cout << END_OF_CLR;
}

void	ClapTrap::attack(const std::string& target) {
	displayHdrMsg();
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

void	ClapTrap::takeDamage(unsigned int amount) {
	displayHdrMsg();
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
		std::cout << CLR_BYELLOW;
		std::cout << "is already collapsed, so not taking damage...\n";
		std::cout << END_OF_CLR;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	displayHdrMsg();
	if ((energy_point_ > 0) && (hit_point_ > 0)) {
		std::cout << CLR_BGREEN;
		std::cout << "is repaired " \
			<< amount << " points of health!";
		std::cout << END_OF_CLR;
		hit_point_ += amount;
		std::cout << " (remained Health: " << hit_point_ << ',';
		--(energy_point_);
		std::cout << " remained Energy: " << energy_point_ << ")\n";
	} else if (hit_point_ <= 0) {
		std::cout << CLR_BYELLOW;
		std::cout << "can't repair because the user is already collapsed...\n";
		std::cout << END_OF_CLR;
	} else if (energy_point_ <= 0) {
		std::cout << CLR_BSKYBLUE;
		std::cout << "can't repair because of zero energy...\n";
		std::cout << END_OF_CLR;
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

void	ClapTrap::displayHdrMsg(void) const {
	std::cout << "ClapTrap User ";
	std::cout << "[ " << name_ << " ] ";
}
