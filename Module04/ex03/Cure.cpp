/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:24:56 by mgo               #+#    #+#             */
/*   Updated: 2022/07/11 13:29:43 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
  : AMateria(CURE_TYPE){}

Cure::~Cure(void) {}

AMateria* Cure::clone() const {
  AMateria  *cloned;

  cloned = new Cure();
  return (cloned);
}

void Cure::use(ICharacter& target) {
  std::cout << "Cure: \"* heals " << target.getName() << "\'s wounds *\"\n";
}
