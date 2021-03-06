/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:49:53 by mgo               #+#    #+#             */
/*   Updated: 2022/07/13 12:04:56 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_MATERIA_SOURCE_HPP
#define I_MATERIA_SOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource {
 public:
  IMateriaSource(void);
  virtual ~IMateriaSource(void);
  virtual void learnMateria(AMateria*) = 0;
  virtual AMateria* createMateria(const std::string& type) = 0;

 private:
  IMateriaSource(const IMateriaSource&);
  virtual IMateriaSource& operator=(const IMateriaSource&);
};

#endif