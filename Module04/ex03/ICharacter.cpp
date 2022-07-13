/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:50:39 by mgo               #+#    #+#             */
/*   Updated: 2022/07/13 12:05:29 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(void) {}

ICharacter::~ICharacter(void) {}

ICharacter::ICharacter(const ICharacter&) {}

ICharacter& ICharacter::operator=(const ICharacter&) {
  return *this;
}
