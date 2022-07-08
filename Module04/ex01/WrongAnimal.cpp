/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:59:17 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 13:03:59 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(const std::string& type)
  : type_(type) {
  dsplyTypeHdrMsg();
  std::cout << "String type constructor called\n";
}

void WrongAnimal::dsplyTypeHdrMsg(void) const {
  std::cout << '[' << type_ << "] ";
}

WrongAnimal::WrongAnimal(void)
  : type_(W_ANML_TYPE) {
  dsplyTypeHdrMsg();
  std::cout << "Default constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& origin)
  : type_(W_ANML_TYPE) {
  *this = origin;
  dsplyTypeHdrMsg();
  std::cout << "Copy constructor called\n";
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& origin) {
  if (this != &origin)
    type_ = origin.type_;
  return *this;
}

WrongAnimal::~WrongAnimal(void) {
  dsplyTypeHdrMsg();
  std::cout << "Destructor called\n";
}

void	WrongAnimal::makeSound(void) const {
  dsplyTypeHdrMsg();
  std::cout << "?????\n";
}

const std::string&	WrongAnimal::getType(void) const {
  return type_;
}

void	WrongAnimal::setType(const std::string &type) {
  type_ = type;
}
