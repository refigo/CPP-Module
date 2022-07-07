/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:18:37 by mgo               #+#    #+#             */
/*   Updated: 2022/07/07 13:36:34 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(const std::string& type_arg)
	: type(type_arg) {
	std::cout << "[Animal] ";
	std::cout << "String type constructor called\n";
}

Animal::Animal(void)
	: type(ANML_TYPE) {
	std::cout << "[Animal] ";
	std::cout << "Default constructor called\n";
}

Animal::Animal(const Animal& origin)
	: type(ANML_TYPE) {
	*this = origin;
	std::cout << "[Animal] ";
	std::cout << "Copy constructor called\n";
}

Animal&	Animal::operator=(const Animal& origin) {
	if (this != &origin)
		type = origin.type;
	return (*this);
}

Animal::~Animal(void) {
	std::cout << "[Animal] ";
	std::cout << "Destructor called\n";
}

void	Animal::makeSound(void) const {
	std::cout << "[Animal] ";
	std::cout << "???\n";
}

const std::string&	Animal::getType(void) const {
	return (type);
}
