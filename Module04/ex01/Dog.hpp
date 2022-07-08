/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 09:43:29 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 12:58:26 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

#define DOG_TYPE "Dog"

class Dog : public Animal {
 public:
  Dog(void);
  Dog(const Dog& origin);
  Dog& operator=(const Dog& origin);
  virtual ~Dog(void);

  virtual void makeSound(void) const;
};

#endif
