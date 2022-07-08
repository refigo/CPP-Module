/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:31:28 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 12:28:39 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
  : Animal(CAT_TYPE) {
  dsplyTypeHdrMsg();
  std::cout << "Default constructor called\n";
}

Cat::Cat(const Cat& origin)
  : Animal(CAT_TYPE) {
  *this = origin;
  dsplyTypeHdrMsg();
  std::cout << "Default constructor called\n";
}

Cat&	Cat::operator=(const Cat& origin) {
  if (this != &origin)
    Animal::operator=(origin);
  return (*this);
}

Cat::~Cat(void) {
  dsplyTypeHdrMsg();
  std::cout << "Destructor called\n";
}

void	Cat::makeSound(void) const {
  dsplyTypeHdrMsg();
  std::cout << "Meow~\n";
}

