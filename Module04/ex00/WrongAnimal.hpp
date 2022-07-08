/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:30:19 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 14:01:33 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <string>
#include <iostream>

#define W_ANML_TYPE "WrongAnimal"

class WrongAnimal {
 private:
  void printWrongAnimalHeader(void) const;

 protected:
  std::string type_;

  WrongAnimal(const std::string& type);

 public:
  WrongAnimal(void);
  WrongAnimal(const WrongAnimal& origin);
  WrongAnimal&	operator=(const WrongAnimal& origin);
  virtual ~WrongAnimal(void);

  void makeSound(void) const;

  const std::string& getType(void) const;
  void setType(const std::string& type);
};

#endif
