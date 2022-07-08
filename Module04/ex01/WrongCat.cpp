/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:59:45 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 14:01:59 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

void WrongCat::printWrongCatHeader(void) const {
  std::cout << '[' << W_CAT_TYPE << "] ";
}

WrongCat::WrongCat(void)
  : WrongAnimal(W_CAT_TYPE) {
  printWrongCatHeader();
  std::cout << "Default constructor called\n";	
}

WrongCat::WrongCat(const WrongCat& origin)
  : WrongAnimal(W_CAT_TYPE) {
  *this = origin;
  printWrongCatHeader();
  std::cout << "Copy constructor called\n";
}
WrongCat& WrongCat::operator=(const WrongCat& origin) {
  if (this != &origin)
    WrongAnimal::operator=(origin);
  return *this;
}

WrongCat::~WrongCat(void) {
  printWrongCatHeader();
  std::cout << "Destructor called\n";
}

void	WrongCat::makeSound(void) const {
  printWrongCatHeader();
  std::cout << "MeowMeowMeow!!!!\n";
}
