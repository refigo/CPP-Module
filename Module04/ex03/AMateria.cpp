/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:01:42 by mgo               #+#    #+#             */
/*   Updated: 2022/07/11 13:14:21 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(const std::string& type)
  : type_(type) {}

AMateria::~AMateria(void) {}

// Return the materia type
const std::string& AMateria::getType() const {
  return type_;
}

void AMateria::use(ICharacter& target) {
  std::cout << type_ << ": \"" << target.getName() <<  "\"\n";
}
