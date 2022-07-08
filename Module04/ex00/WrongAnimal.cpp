/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:59:17 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 12:31:27 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(const std::string& type_arg)
  : type(type_arg) {
  dsplyTypeHdrMsg();
  std::cout << "String type constructor called\n";
}

void	WrongAnimal::dsplyTypeHdrMsg(void) const {
  std::cout << '[' << type << "] ";
}

WrongAnimal::WrongAnimal(void)
  : type(W_ANML_TYPE) {
  dsplyTypeHdrMsg();
  std::cout << "Default constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& origin)
  : type(W_ANML_TYPE) {
  *this = origin;
  dsplyTypeHdrMsg();
  std::cout << "Copy constructor called\n";
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& origin) {
  if (this != &origin)
    type = origin.type;
  return (*this);
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
  return (type);
}

void	WrongAnimal::setType(const std::string &type_arg) {
  type = type_arg;
}
