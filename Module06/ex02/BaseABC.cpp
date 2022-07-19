/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BaseABC.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:42:06 by mgo               #+#    #+#             */
/*   Updated: 2022/07/19 16:36:07 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BaseABC.hpp"

Base::~Base(void) {};

Base* generate(void) {
  int rdn = std::rand() % 3;
  switch (rdn) {
    case 0:
      std::cout << "A is generated\n";
      return new A;
    case 1:
      std::cout << "B is generated\n";
      return new B;
    case 2:
      std::cout << "C is generated\n";
      return new C;
  }
  return (new Base);
}

void identify(Base* p) {
  if (dynamic_cast<A*>(p)) {
    std::cout << "A\n";
  } else if (dynamic_cast<B*>(p)) {
    std::cout << "B\n";
  } else if (dynamic_cast<C*>(p)) {
    std::cout << "C\n";
  } else {}
}

void identify(Base& p) {
  try {
    (void)dynamic_cast<A&>(p);
    std::cout << "A\n";
    return ;
  } catch (std::exception& e) {}
  try {
    (void)dynamic_cast<B&>(p);
    std::cout << "B\n";
    return ;
  } catch (std::exception& e) {}
  try {
    (void)dynamic_cast<C&>(p);
    std::cout << "C\n";
    return ;
  } catch (std::exception& e) {}
}
