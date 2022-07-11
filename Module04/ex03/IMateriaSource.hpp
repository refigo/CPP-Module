/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:49:53 by mgo               #+#    #+#             */
/*   Updated: 2022/07/11 11:19:39 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_MATERIA_SOURCE_HPP
#define I_MATERIA_SOURCE_HPP

#include "AMateria.hpp"
#include <string>

class IMateriaSource {
 private:
  IMateriaSource(IMateriaSource& orig);
  IMateriaSource& operator=(const IMateriaSource& rhs);

 public:
  IMateriaSource(void);
  virtual ~IMateriaSource(void);

  virtual void learnMateria(AMateria* mtr) = 0;
  virtual AMateria* createMateria(const std::string& type) = 0;
};

#endif