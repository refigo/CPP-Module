/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:46:59 by mgo               #+#    #+#             */
/*   Updated: 2022/07/26 17:23:39 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>

void testPlace(void) {
  std::cout << std::endl;

  // pdf test
  std::cout << "<Start pdf test>\n";
  {
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "shortestSpan: ["<< sp.shortestSpan() << "]\n";
    std::cout << "longestSpan: ["<< sp.longestSpan() << "]\n";
  }
  std::cout << "<Done pdf test>\n";

  std::cout << std::endl;

  // constructors test
  std::cout << "<Start constructors test>\n";
  {
    Span dflt;
    std::cout << "dflt maxsize: [" << dflt.getMaxsize() << "]\n\n";
    Span tocopy(5);
    tocopy.addNumber(1);
    tocopy.addNumber(2);
    dflt = tocopy;
    dflt.addNumber(3);
    dflt.addNumber(3);
    dflt.addNumber(5);
    std::cout << "tocopy maxsize: [" << tocopy.getMaxsize() << "]\n";
    std::cout << "shortestSpan: ["<< tocopy.shortestSpan() << "]\n";
    std::cout << "longestSpan: ["<< tocopy.longestSpan() << "]\n";
    std::cout << '\n';
    std::cout << "dflt maxsize: [" << dflt.getMaxsize() << "]\n";
    std::cout << "shortestSpan: ["<< dflt.shortestSpan() << "]\n";
    std::cout << "longestSpan: ["<< dflt.longestSpan() << "]\n";
  }
  std::cout << "<Done constructors test>\n";

  std::cout << std::endl;

  // extreme test
  std::cout << "<Start extreme test>\n";
  {
    Span sp(20000);
    std::vector<int> extrm_vec;

    for (int i = -7500; i < 10000; ++i) {
      extrm_vec.push_back(i);
    }
    sp.addNumbers(extrm_vec.begin(), extrm_vec.end());
    std::cout << "maxsize: [" << sp.getMaxsize() << "]\n";
    std::cout << "shortestSpan: ["<< sp.shortestSpan() << "]\n";
    std::cout << "longestSpan: ["<< sp.longestSpan() << "]\n";
    std::cout << '\n';
    sp.addNumber(INT_MIN);
    sp.addNumber(INT_MAX);
    std::cout << "shortestSpan: ["<< sp.shortestSpan() << "]\n";
    std::cout << "longestSpan: ["<< sp.longestSpan() << "]\n";
  }
  std::cout << "<Done extreme test>\n";

  std::cout << std::endl;

  // exception test
  std::cout << "<Start exception test>\n";
  {
    // test addNumber()
    try {
      Span sp(1);
      for (int i = 0; i < 3; ++i)
        sp.addNumber(i);
      std::cout << "No thrown exception\n";
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
    // test addNumbers()
    try {
      Span sp(50);
      std::vector<int> extrm_vec;
      for (int i = -75; i < 100; ++i) {
        extrm_vec.push_back(i);
      }
      sp.addNumbers(extrm_vec.begin(), extrm_vec.end());
      std::cout << "No thrown exception\n";
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
    // test shortestSpan()
    try {
      Span sp(1);
      std::cout << "shortestSpan: ["<< sp.shortestSpan() << "]\n";
      std::cout << "No thrown exception\n";
    } catch (std::exception& e) {
      std::cout << '\n' << e.what() << std::endl;
    }
    // test longestSpan()
    try {
      Span sp(1);
      std::cout << "longestSpan: ["<< sp.longestSpan() << "]\n";
      std::cout << "No thrown exception\n";
    } catch (std::exception& e) {
      std::cout << '\n' << e.what() << std::endl;
    }
  }
  std::cout << "<Done exception test>\n";

  std::cout << std::endl;
}

int main(void) {
  testPlace();
  return 0;
}
