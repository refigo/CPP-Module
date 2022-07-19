/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BaseABC.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:42:11 by mgo               #+#    #+#             */
/*   Updated: 2022/07/19 16:17:25 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_A_B_C_HPP
#define BASE_A_B_C_HPP

#include <iostream>
#include <exception>

class Base {
 public:
  virtual ~Base(void);
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
