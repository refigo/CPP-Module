/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:31:28 by mgo               #+#    #+#             */
/*   Updated: 2022/07/07 13:35:36 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
	: Animal(CAT_TYPE) {
	std::cout << "[Cat] ";
	std::cout << "Default constructor called\n";
}

Cat::Cat(const Cat& origin)
	: Animal(CAT_TYPE) {
	*this = origin;
	std::cout << "[Cat] ";
	std::cout << "Default constructor called\n";
}

Cat&	Cat::operator=(const Cat& origin) {
	if (this != &origin)
		Animal::operator=(origin);
	return (*this);
}

Cat::~Cat(void) {
	std::cout << "[Cat] ";
	std::cout << "Destructor called\n";
}

void	Cat::makeSound(void) const {
	std::cout << "[Cat] ";
	std::cout << "Miyaong..\n";
}

