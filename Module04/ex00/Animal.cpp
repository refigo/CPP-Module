/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:18:37 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 13:01:01 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(const std::string& type)
  : type_(type) {
  dsplyTypeHdrMsg();
  std::cout << "String type constructor called\n";
}

void Animal::dsplyTypeHdrMsg(void) const {
  std::cout << '[' << type_ << "] ";
}

Animal::Animal(void)
  : type_(ANML_TYPE) {
  dsplyTypeHdrMsg();
  std::cout << "Default constructor called\n";
}

Animal::Animal(const Animal& origin)
  : type_(ANML_TYPE) {
  *this = origin;
  dsplyTypeHdrMsg();
  std::cout << "Copy constructor called\n";
}

Animal& Animal::operator=(const Animal& origin) {
  if (this != &origin)
    type_ = origin.type_;
  return *this;
}

Animal::~Animal(void) {
  dsplyTypeHdrMsg();
  std::cout << "Destructor called\n";
}

void Animal::makeSound(void) const {
  dsplyTypeHdrMsg();
  std::cout << "???\n";
}

const std::string& Animal::getType(void) const {
  return type_;
}

void Animal::setType(const std::string &type) {
  type_ = type;
}
