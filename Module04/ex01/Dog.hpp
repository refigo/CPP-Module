/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 09:43:29 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 14:50:28 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#define DOG_TYPE "Dog"

class Dog : public Animal {
 private:
  Brain *brain_;

  void printDogHeader(void) const;

 public:
  Dog(void);
  Dog(const Dog& origin);
  Dog& operator=(const Dog& origin);
  virtual ~Dog(void);

  virtual void makeSound(void) const;

  const std::string getBrainIdea(const int idx);
  void setBrainIdea(const int idx, const std::string& idea);
};

#endif
