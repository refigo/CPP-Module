/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:46:20 by mgo               #+#    #+#             */
/*   Updated: 2022/07/12 17:09:01 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
  for (int i = 0; i < MAX_MEM_MTRL_SLOTS; ++i) {
    mem_mtrl_[i] = NULL;
  }
}

MateriaSource::MateriaSource(const MateriaSource& orig) {
  for (int i = 0; i < MAX_MEM_MTRL_SLOTS; ++i) {
    mem_mtrl_[i] = NULL;
  }
  *this = orig;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {
  if (this != &rhs) {
    for (int i = 0; i < MAX_MEM_MTRL_SLOTS; ++i) {
      if (mem_mtrl_[i]) {
        delete mem_mtrl_[i];
        mem_mtrl_[i] = NULL;
      }
      if (rhs.mem_mtrl_[i])
        mem_mtrl_[i] = rhs.mem_mtrl_[i]->clone();
    }
  }
  return *this;
}

MateriaSource::~MateriaSource(void) {
  for (int i = 0; i < MAX_MEM_MTRL_SLOTS; ++i) {
    if (mem_mtrl_[i]) {
      delete mem_mtrl_[i];
      mem_mtrl_[i] = NULL;
    }
  }
}

void MateriaSource::learnMateria(AMateria* m) {
  if (m == NULL)
    return ;
  for (int i = 0; i < MAX_MEM_MTRL_SLOTS; ++i) {
    if (mem_mtrl_[i] == NULL) {
      mem_mtrl_[i] = m;
      return ;
    }
  }
}

AMateria* MateriaSource::createMateria(const std::string& type) {
  for (int i = 0; i < MAX_MEM_MTRL_SLOTS; ++i) {
    if (mem_mtrl_[i] && (mem_mtrl_[i]->getType() == type)) {
      return (mem_mtrl_[i]->clone());
    }
  }
  return NULL;
}

