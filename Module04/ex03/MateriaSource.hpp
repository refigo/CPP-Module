/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:43:14 by mgo               #+#    #+#             */
/*   Updated: 2022/07/11 15:45:19 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

#define MAX_MEM_MTRL_SLOTS 4

class MateriaSource : public IMateriaSource {
 private:
  AMateria* mem_mtrl_[MAX_MEM_MTRL_SLOTS];

 public:
  MateriaSource(void);
  MateriaSource(const MateriaSource& orig);
  MateriaSource& operator=(const MateriaSource& rhs);
  ~MateriaSource(void);

  void learnMateria(AMateria* mtr);
  AMateria* createMateria(const std::string& type);
};

#endif
