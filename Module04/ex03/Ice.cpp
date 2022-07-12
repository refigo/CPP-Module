/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:47:41 by mgo               #+#    #+#             */
/*   Updated: 2022/07/12 17:00:42 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria(ICE_TYPE) {}

Ice::Ice(const Ice& orig): AMateria(ICE_TYPE) {
  *this = orig;
}

Ice& Ice::operator=(const Ice& rhs) {
  AMateria::operator=(rhs);
  return *this;
}

Ice::~Ice(void) {}

AMateria* Ice::clone() const {
  AMateria  *cloned;

  cloned = new Ice();
  return (cloned);
}

void Ice::use(ICharacter& target) {
  std::cout << "Ice: \"* shoots an ice bolt at " << target.getName() << " *\"\n";
}
