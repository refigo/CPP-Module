/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 09:44:02 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 14:50:45 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#define CAT_TYPE "Cat"

class Cat : public Animal {
 private:
  Brain *brain_;

  void printCatHeader(void) const;

 public:
  Cat(void);
  Cat(const Cat& origin);
  Cat& operator=(const Cat& origin);
  virtual ~Cat(void);

  virtual void makeSound(void) const;

  const std::string getBrainIdea(const int idx);
  void setBrainIdea(const int idx, const std::string& idea);
};

#endif
