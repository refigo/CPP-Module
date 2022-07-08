/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:25:17 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 12:29:44 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
  : Animal(DOG_TYPE) {
  dsplyTypeHdrMsg();
  std::cout << "Default constructor called\n";
}

Dog::Dog(const Dog& origin)
  : Animal(DOG_TYPE) {
  *this = origin;
  dsplyTypeHdrMsg();
  std::cout << "Copy constructor called\n";
}

Dog&	Dog::operator=(const Dog& origin) {
  if (this != &origin)
    Animal::operator=(origin);
  return (*this);
}

Dog::~Dog(void) {
  dsplyTypeHdrMsg();
  std::cout << "Destructor called\n";
}

void	Dog::makeSound(void) const {
  dsplyTypeHdrMsg();
  std::cout << "BowWow!!\n";
}
