/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:37:45 by mgo               #+#    #+#             */
/*   Updated: 2022/07/11 13:40:53 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

#define ICE_TYPE "ice"

class Ice : public AMateria {
 private:
  Ice(const Ice& orig);
  Ice& operator=(const Ice& rhs);

 public:
  Ice(void);
  ~Ice(void);

  AMateria* clone() const;
  void use(ICharacter& target);
};

#endif