/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:18:37 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 18:20:57 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void Animal::printAnimalHeader(void) const {
  std::cout << '[' << ANML_TYPE << "] ";
}

Animal::Animal(const std::string& type)
  : type_(type) {
  printAnimalHeader();
  std::cout << "String type constructor called\n";
}

Animal::Animal(void)
  : type_(ANML_TYPE) {
  printAnimalHeader();
  std::cout << "Default constructor called\n";
}

Animal::Animal(const Animal& origin)
  : type_(ANML_TYPE) {
  *this = origin;
  printAnimalHeader();
  std::cout << "Copy constructor called\n";
}

Animal& Animal::operator=(const Animal& origin) {
  if (this != &origin)
    type_ = origin.type_;
  return *this;
}

Animal::~Animal(void) {
  printAnimalHeader();
  std::cout << "Destructor called\n";
}

const std::string& Animal::getType(void) const {
  return type_;
}

void Animal::setType(const std::string &type) {
  type_ = type;
}
