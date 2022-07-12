/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:11:48 by mgo               #+#    #+#             */
/*   Updated: 2022/07/12 16:39:32 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_HPP
#define A_MATERIA_HPP

#include <string>
#include <iostream>

#define A_MTRL_TYPE "material"

class ICharacter;

class AMateria {
 protected:
  const std::string type_;

 public:
  AMateria(const std::string& type);
  AMateria(void);
  AMateria(const AMateria& orig);
  AMateria &operator=(const AMateria& rhs);
  virtual ~AMateria(void);
  
  const std::string& getType() const;

  virtual AMateria* clone() const = 0;
  virtual void use(ICharacter& target);
};

#endif
