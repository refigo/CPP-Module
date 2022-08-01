/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:42:09 by mgo               #+#    #+#             */
/*   Updated: 2022/08/01 10:37:16 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BaseABC.hpp"
#include <cstdlib>
#include <ctime>

void testPlace(void) {
  std::srand(std::time(NULL));
  for (int i = 0; i < 10; ++i) {
    Base *what = generate();
    std::cout << "The actual type of pointer: ";
    identify(what);
    std::cout << "The actual type of reference: ";
    identify(*what);
    std::cout << std::endl;
    delete what;
  }
}

int	main(void) {
  testPlace();
  system("leaks a.out");
  return (0);
}
