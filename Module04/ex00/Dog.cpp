/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:25:17 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 13:59:09 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void Dog::printDogHeader(void) const {
  std::cout << '[' << DOG_TYPE << "] ";
}

Dog::Dog(void)
  : Animal(DOG_TYPE) {
  printDogHeader();
  std::cout << "Default constructor called\n";
}

Dog::Dog(const Dog& origin)
  : Animal(DOG_TYPE) {
  *this = origin;
  printDogHeader();
  std::cout << "Copy constructor called\n";
}

Dog& Dog::operator=(const Dog& origin) {
  if (this != &origin)
    Animal::operator=(origin);
  return *this;
}

Dog::~Dog(void) {
  printDogHeader();
  std::cout << "Destructor called\n";
}

void Dog::makeSound(void) const {
  printDogHeader();
  std::cout << "BowWow!!\n";
}
