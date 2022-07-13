/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:17:31 by mgo               #+#    #+#             */
/*   Updated: 2022/07/13 11:32:23 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

static void testPlace(void) {
  std::cout << std::endl;

  // testing construction
  std::cout << "<Start testing construction of Bureaucrat>\n";
  {
    try {
      for (int i = 100; (i < 200); ++i) {
        Bureaucrat testing_con_low("testingConstructionLow", i);
        std::cout << testing_con_low << '\n';
      }
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try {
      for (int i = 50; (-50 < i); --i) {
        Bureaucrat testing_con_high("testingConstructionHigh", i);
        std::cout << testing_con_high << '\n';
      }
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
  }
  std::cout << "<Done testing construction of Bureaucrat>\n\n";
  std::cout << std::endl;

  // testing incrementation and decrementation
  std::cout << "<Start testing incrementation and decrementation>\n";
  {
    Bureaucrat testing_inc("testingIncrement", 50);
    Bureaucrat testing_dec("testingDecrement", 100);

    std::cout << testing_inc << '\n';
    try {
      for (int i = 0; i < 200; ++i) {
        testing_inc.incrementGrade();
        std::cout << testing_inc << '\n';
      }
    } catch (std::exception& e) {
      std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << testing_dec << '\n';
    try {
      for (int i = 0; i < 100; ++i) {
        testing_dec.decrementGrade();
        std::cout << testing_dec << '\n';
      }
    } catch (std::exception& e) {
      std::cerr << e.what() << std::endl;
    }
  }
  std::cout << "<Done testing incrementation and decrementation>\n";
  std::cout << std::endl;
}

int main(void) {
  testPlace();
  //system("leaks bureaucrat");
  return 0;
}
