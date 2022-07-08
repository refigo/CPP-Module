/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:25:17 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 14:57:46 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void Dog::printDogHeader(void) const {
  std::cout << '[' << DOG_TYPE << "] ";
}

Dog::Dog(void)
  : Animal(DOG_TYPE) {
  brain_ = new Brain();
  printDogHeader();
  std::cout << "Default constructor called\n";
}

Dog::Dog(const Dog& origin)
  : Animal(DOG_TYPE) {
  brain_ = new Brain();
  *this = origin;
  printDogHeader();
  std::cout << "Copy constructor called\n";
}

Dog& Dog::operator=(const Dog& origin) {
  if (this != &origin) {
    Animal::operator=(origin);
    brain_ = origin.brain_;
  }
  return *this;
}

Dog::~Dog(void) {
  delete brain_;
  printDogHeader();
  std::cout << "Destructor called\n";
}

void Dog::makeSound(void) const {
  printDogHeader();
  std::cout << "BowWow!!\n";
}

const std::string Dog::getBrainIdea(const int idx) {
  return (brain_->getIdea(idx));
}

void Dog::setBrainIdea(const int idx, const std::string& idea) {
  brain_->setIdea(idx, idea);
}
