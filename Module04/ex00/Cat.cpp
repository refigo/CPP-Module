/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:31:28 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 13:58:29 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::printCatHeader(void) const {
  std::cout << '[' << CAT_TYPE << "] ";
}

Cat::Cat(void)
  : Animal(CAT_TYPE) {
  printCatHeader();
  std::cout << "Default constructor called\n";
}

Cat::Cat(const Cat& origin)
  : Animal(CAT_TYPE) {
  *this = origin;
  printCatHeader();
  std::cout << "Default constructor called\n";
}

Cat& Cat::operator=(const Cat& origin) {
  if (this != &origin)
    Animal::operator=(origin);
  return *this;
}

Cat::~Cat(void) {
  printCatHeader();
  std::cout << "Destructor called\n";
}

void Cat::makeSound(void) const {
  printCatHeader();
  std::cout << "Meow~\n";
}
