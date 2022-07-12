/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:24:56 by mgo               #+#    #+#             */
/*   Updated: 2022/07/12 16:58:58 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria(CURE_TYPE) {}

Cure::Cure(const Cure& orig): AMateria(CURE_TYPE) {
  *this = orig;
}

Cure& Cure::operator=(const Cure& rhs) {
  AMateria::operator=(rhs);
  return *this;
}

Cure::~Cure(void) {}

AMateria* Cure::clone() const {
  AMateria  *cloned;

  cloned = new Cure();
  return (cloned);
}

void Cure::use(ICharacter& target) {
  std::cout << "Cure: \"* heals " << target.getName() << "\'s wounds *\"\n";
}
