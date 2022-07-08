/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:18:37 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 11:04:51 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(const std::string& type_arg)
	: type(type_arg) {
	dsplyTypeHdrMsg();
	std::cout << "String type constructor called\n";
}

void	Animal::dsplyTypeHdrMsg(void) const {
	std::cout << '[' << type << "] ";
}

Animal::Animal(void)
	: type(ANML_TYPE) {
	dsplyTypeHdrMsg();
	std::cout << "Default constructor called\n";
}

Animal::Animal(const Animal& origin)
	: type(ANML_TYPE) {
	*this = origin;
	dsplyTypeHdrMsg();
	std::cout << "Copy constructor called\n";
}

Animal&	Animal::operator=(const Animal& origin) {
	if (this != &origin)
		type = origin.type;
	return (*this);
}

Animal::~Animal(void) {
	dsplyTypeHdrMsg();
	std::cout << "Destructor called\n";
}

void	Animal::makeSound(void) const {
	dsplyTypeHdrMsg();
	std::cout << "???\n";
}

const std::string&	Animal::getType(void) const {
	return (type);
}

void	Animal::setType(const std::string &type_arg) {
	type = type_arg;
}
