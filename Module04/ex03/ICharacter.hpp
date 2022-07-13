/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:24:06 by mgo               #+#    #+#             */
/*   Updated: 2022/07/13 12:05:40 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_CHARACTER_HPP
#define I_CHARACTER_HPP

#include "AMateria.hpp"

class ICharacter {
 public:
  ICharacter(void);
  virtual ~ICharacter(void);
  virtual const std::string& getName() const = 0;
  virtual void equip(AMateria* m) = 0;
  virtual void unequip(int idx) = 0;
  virtual void use(int idx, ICharacter& target) = 0;

 private:
  ICharacter(const ICharacter&);
  virtual ICharacter& operator=(const ICharacter&);
};

#endif
