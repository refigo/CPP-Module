/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:00:36 by mgo               #+#    #+#             */
/*   Updated: 2022/07/11 13:29:16 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

#define CURE_TYPE "cure"

class Cure : public AMateria {
 private:
  Cure(const Cure& orig);
  Cure& operator=(const Cure& rhs);

 public:
  Cure(void);
  ~Cure(void);

  AMateria* clone() const;
  void use(ICharacter& target);
};

#endif
