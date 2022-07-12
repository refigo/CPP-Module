/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:07:08 by mgo               #+#    #+#             */
/*   Updated: 2022/07/12 16:53:58 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string& name): name_(name) {
  for (int i = 0; i < MAX_INVEN_MTRL_SLOTS; ++i)
    inven_mtrl_[i] = NULL;
}

Character::Character(void): name_(CHARAC_DFLT_NAME) {
  for (int i = 0; i < MAX_INVEN_MTRL_SLOTS; ++i)
    inven_mtrl_[i] = NULL;
}

Character::Character(const Character& orig): name_(CHARAC_DFLT_NAME) {
  for (int i = 0; i < MAX_INVEN_MTRL_SLOTS; ++i)
    inven_mtrl_[i] = NULL;
  *this = orig;
}

Character& Character::operator=(const Character& rhs) {
  if (this != &rhs) {
    for (int i = 0; i < MAX_INVEN_MTRL_SLOTS; ++i) {
      if (inven_mtrl_[i]) {
        delete inven_mtrl_[i];
        inven_mtrl_[i] = NULL;
      }
      if (rhs.inven_mtrl_[i])
        inven_mtrl_[i] = rhs.inven_mtrl_[i]->clone();
    }
    name_ = rhs.name_;
  }
  return *this;
}

Character::~Character(void) {
  for (int i = 0; i < MAX_INVEN_MTRL_SLOTS; ++i) {
    if (inven_mtrl_[i]) {
      delete inven_mtrl_[i];
      inven_mtrl_[i] = NULL;
    }
  }
}

const std::string& Character::getName() const {
  return name_;
}

void Character::equip(AMateria* m) {
  if (m == NULL)
    return ;
  for (int i = 0; i < MAX_INVEN_MTRL_SLOTS; ++i) {
    if (inven_mtrl_[i] == NULL) {
      inven_mtrl_[i] = m;
      return ;
    }
  }
}

void Character::unequip(int idx) {
  if ((0 <= idx) && (idx < MAX_INVEN_MTRL_SLOTS)\
   && (inven_mtrl_[idx])) {
    inven_mtrl_[idx] = NULL;
  }
}

void Character::use(int idx, ICharacter& target) {
  if ((0 <= idx) && (idx < MAX_INVEN_MTRL_SLOTS)\
   && (inven_mtrl_[idx])) {
     inven_mtrl_[idx]->use(target);
   }
}
