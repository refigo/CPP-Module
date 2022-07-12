/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:00:36 by mgo               #+#    #+#             */
/*   Updated: 2022/07/12 16:56:32 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

#define CURE_TYPE "cure"

class Cure : public AMateria {
 public:
  Cure(void);
  Cure(const Cure& orig);
  Cure& operator=(const Cure& rhs);
  ~Cure(void);

  AMateria* clone() const;
  void use(ICharacter& target);
};

#endif
