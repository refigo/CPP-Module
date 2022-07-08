/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:31:28 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 14:51:53 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::printCatHeader(void) const {
  std::cout << '[' << CAT_TYPE << "] ";
}

Cat::Cat(void)
  : Animal(CAT_TYPE) {
  brain_ = new Brain();
  printCatHeader();
  std::cout << "Default constructor called\n";
}

Cat::Cat(const Cat& origin)
  : Animal(CAT_TYPE) {
  brain_ = new Brain();
  *this = origin;
  printCatHeader();
  std::cout << "Default constructor called\n";
}

Cat& Cat::operator=(const Cat& origin) {
  if (this != &origin) {
    Animal::operator=(origin);
    brain_ = origin.brain_;
  }
  return *this;
}

Cat::~Cat(void) {
  delete brain_;
  printCatHeader();
  std::cout << "Destructor called\n";
}

void Cat::makeSound(void) const {
  printCatHeader();
  std::cout << "Meow~\n";
}

const std::string Cat::getBrainIdea(const int idx) {
  return (brain_->getIdea(idx));
}

void Cat::setBrainIdea(const int idx, const std::string& idea) {
  brain_->setIdea(idx, idea);
}
