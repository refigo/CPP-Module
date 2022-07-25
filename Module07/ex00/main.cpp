/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:20:06 by mgo               #+#    #+#             */
/*   Updated: 2022/07/25 09:47:14 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

void testPlace(void) {
  std::cout << std::endl;

  // testing pdf
  std::cout << "<Start pdf test>\n";
  {
    int a = 2;
    int b = 3;
  
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
  }
  std::cout << "<Done pdf test>\n";

  std::cout << std::endl;

  // testing when equal
  std::cout << "<Start equal test>\n";
  {
    int first(42), second(42);

    std::cout << "address of first: [" << &first << "]\n";
    std::cout << "address of second: [" << &second << "]\n";
    std::cout << "min() return value: [" << min(first, second) << "]\n";
    std::cout << "address of min() return value: [" << &min(first, second) << "]\n";
    std::cout << "max() return value: [" << max(first, second) << "]\n";
    std::cout << "address of max() return value: [" << &max(first, second) << "]\n";
  }
  std::cout << "<Start equal test>\n";

  std::cout << std::endl;
}

int main(void) {
  testPlace();
  return 0;
}
