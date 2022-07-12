/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:47:36 by mgo               #+#    #+#             */
/*   Updated: 2022/07/12 17:16:52 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

#define MAX_INVEN_MTRL_SLOTS 4
#define CHARAC_DFLT_NAME "character"

class Character : public ICharacter {
 private:
  AMateria* inven_mtrl_[MAX_INVEN_MTRL_SLOTS];
  std::string name_;

 public:
  Character(const std::string& name);
  Character(void);
  Character(const Character& orig);
  Character& operator=(const Character& rhs);
  virtual ~Character(void);

  const std::string& getName() const;
  void equip(AMateria* m);
  void unequip(int idx);
  void use(int idx, ICharacter& target);

  void useAllItems(ICharacter& target);
};

#endif
