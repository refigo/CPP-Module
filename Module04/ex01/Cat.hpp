/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 09:44:02 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 13:22:04 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#define CAT_TYPE "Cat"

class Cat : public Animal {
 public:
  Cat(void);
  Cat(const Cat& origin);
  Cat& operator=(const Cat& origin);
  virtual ~Cat(void);

  virtual void makeSound(void) const;
};

#endif
