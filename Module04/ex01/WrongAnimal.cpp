/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:59:17 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 14:02:15 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void WrongAnimal::printWrongAnimalHeader(void) const {
  std::cout << '[' << W_ANML_TYPE << "] ";
}

WrongAnimal::WrongAnimal(const std::string& type)
  : type_(type) {
  printWrongAnimalHeader();
  std::cout << "String type constructor called\n";
}

WrongAnimal::WrongAnimal(void)
  : type_(W_ANML_TYPE) {
  printWrongAnimalHeader();
  std::cout << "Default constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& origin)
  : type_(W_ANML_TYPE) {
  *this = origin;
  printWrongAnimalHeader();
  std::cout << "Copy constructor called\n";
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& origin) {
  if (this != &origin)
    type_ = origin.type_;
  return *this;
}

WrongAnimal::~WrongAnimal(void) {
  printWrongAnimalHeader();
  std::cout << "Destructor called\n";
}

void	WrongAnimal::makeSound(void) const {
  printWrongAnimalHeader();
  std::cout << "?????\n";
}

const std::string&	WrongAnimal::getType(void) const {
  return type_;
}

void	WrongAnimal::setType(const std::string &type) {
  type_ = type;
}
