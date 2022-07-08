/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 09:41:16 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 18:19:22 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

#define ANML_TYPE "Animal"

// AAnimal
class Animal {
 private:
  void printAnimalHeader(void) const;

 protected:
  std::string	type_;

  Animal(const std::string& type);

 public:
  Animal(void);
  Animal(const Animal& origin);
  Animal& operator=(const Animal& origin);
  virtual ~Animal(void);

  virtual void makeSound(void) const = 0;

  const std::string& getType(void) const;
  void setType(const std::string& type);
};

#endif
