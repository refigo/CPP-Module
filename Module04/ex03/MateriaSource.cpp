/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:46:20 by mgo               #+#    #+#             */
/*   Updated: 2022/07/11 16:02:10 by mgo              ###   ########.fr       */
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
    if (orig.mem_mtrl_[i]) {
      mem_mtrl_[i] = orig.mem_mtrl_[i]->clone();
    } else {
      mem_mtrl_[i] = NULL;
    }
  }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {

}

MateriaSource::~MateriaSource(void) {

}

void MateriaSource::learnMateria(AMateria* mtr) {

}

AMateria* MateriaSource::createMateria(const std::string& type) {

}

