/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:31:35 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 14:00:47 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

#define W_CAT_TYPE "WrongCat"

class WrongCat : public WrongAnimal {
 private:
  void printWrongCatHeader(void) const;

 public:
  WrongCat(void);
  WrongCat(const WrongCat& origin);
  WrongCat& operator=(const WrongCat& origin);
  virtual ~WrongCat(void);

  void makeSound(void) const;
};

#endif
