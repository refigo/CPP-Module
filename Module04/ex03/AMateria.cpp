/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:01:42 by mgo               #+#    #+#             */
/*   Updated: 2022/07/12 16:42:47 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(const std::string& type): type_(type) {}

AMateria::AMateria(void): type_(A_MTRL_TYPE) {}

AMateria::AMateria(const AMateria& orig): type_(orig.type_) {}

AMateria& AMateria::operator=(const AMateria& rhs) {
  const_cast<std::string&>(type_) = rhs.type_;
  return *this;
}

AMateria::~AMateria(void) {}

const std::string& AMateria::getType() const {
  return type_;
}

void AMateria::use(ICharacter& target) {
  std::cout << type_ << ": \"* just shows " << type_ \
    << " to " << target.getName() <<  " *\"\n";
}
