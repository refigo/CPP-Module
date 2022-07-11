/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:47:36 by mgo               #+#    #+#             */
/*   Updated: 2022/07/11 15:42:01 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

#define MAX_INVEN_MTRL_SLOTS 4

class Character : public ICharacter {
 private:
  AMateria* inven_mtrl_[MAX_INVEN_MTRL_SLOTS];
  std::string name_;

  Character(void);

 public:
  Character(const std::string& name);
  Character(const Character& orig);
  Character& operator=(const Character& rhs);
  virtual ~Character(void);

  const std::string& getName() const;
  void equip(AMateria* m);
  void unequip(int idx);
  void use(int idx, ICharacter& target);
};

#endif
