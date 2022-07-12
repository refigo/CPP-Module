/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:37:45 by mgo               #+#    #+#             */
/*   Updated: 2022/07/12 16:59:16 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

#define ICE_TYPE "ice"

class Ice : public AMateria {
 public:
  Ice(void);
  Ice(const Ice& orig);
  Ice& operator=(const Ice& rhs);
  ~Ice(void);

  AMateria* clone() const;
  void use(ICharacter& target);
};

#endif