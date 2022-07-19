/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:42:07 by mgo               #+#    #+#             */
/*   Updated: 2022/07/19 15:32:51 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(const std::string& name)
  : name_(name) {}

Data::Data(void)
  : name_("data") {}
  
Data::Data(const Data& orig)
  : name_(DATA_DFLT_NAME) {
  *this = orig;
}

Data& Data::operator=(const Data& rhs) {
  if (this != &rhs) {
    name_ = rhs.name_;
  }
  return (*this);
}

Data::~Data(void) {}

const std::string& Data::getName(void) const {
  return name_;
}

const Data* Data::getThisPtr(void) const {
  return this;
}

std::ostream& operator<<(std::ostream& ostrm, const Data& data) {
  ostrm << "<Watching Data>\n" 
        << "\tname(string): " << data.getName() << '\n' 
        << "\tptr(address): " << data.getThisPtr() << '\n';
  return (ostrm);
}

uintptr_t serialize(Data *ptr) {
  return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
  return (reinterpret_cast<Data*>(raw));
}
