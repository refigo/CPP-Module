/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 09:49:39 by mgo               #+#    #+#             */
/*   Updated: 2022/07/25 10:42:32 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>

void testPlace(void) {
  std::cout << std::endl;

  // testing int iter()
  std::cout << "<Start iter() for int>\n";
  {
    int arr[7] = {0, 1, 2, 3, 4, 5, 6};
    iter(arr, 7, printArg);
    std::cout << '\n';
  }
  std::cout << "<Done iter() for int>\n";

  std::cout << std::endl;

  // testing double iter()
  std::cout << "<Start iter() for double>\n";
  {
    double arr[7] = {0.1, 1.2, 2.3, 3.4, 4.5, 5.6, 6.7};
    iter(arr, 7, printArg);
    std::cout << '\n';
  }
  std::cout << "<Done iter() for double>\n";

  std::cout << std::endl;

  // testing string iter()
  std::cout << "<Start iter() for string>\n";
  {
    std::string arr[6] = {"mgo0", "mgo1", "mgo2", "mgo3", "mgo4", "mgo5"};
    iter(arr, 6, printArg);
    std::cout << '\n';
  }
  std::cout << "<Done iter() for string>\n";

  std::cout << std::endl;
}

int main(void) {
  testPlace();
  return 0;
}
