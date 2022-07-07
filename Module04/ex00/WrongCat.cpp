/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:59:45 by mgo               #+#    #+#             */
/*   Updated: 2022/07/07 14:27:01 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
	: WrongAnimal(W_CAT_TYPE) {
	std::cout << "[WrongCat] ";
	std::cout << "Default constructor called\n";	
}

WrongCat::WrongCat(const WrongCat& origin)
	: WrongAnimal(W_CAT_TYPE) {
	*this = origin;
	std::cout << "[WrongCat] ";
	std::cout << "Copy constructor called\n";
}
WrongCat&	WrongCat::operator=(const WrongCat& origin) {
	if (this != &origin)
		WrongAnimal::operator=(origin);
	return (*this);
}

WrongCat::~WrongCat(void) {
	std::cout << "[WrongCat] ";
	std::cout << "Destructor called\n";
}

void	WrongCat::makeSound(void) const {
	std::cout << "[WrongCat] ";
	std::cout << "MeowMeowMeow!!!!\n";
}
