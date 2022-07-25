/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:21:13 by mgo               #+#    #+#             */
/*   Updated: 2022/07/25 16:47:21 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>
#include <iostream>

void testPlace(void) {
  std::cout << std::endl;

  // testing in vector<int>
  std::cout << "<Start testing easyfind() to vector<int>>\n";
  {
    std::vector<int> vec_int;
    std::vector<int>::iterator it;

    for (int i = 0; i < 10; ++i) {
      vec_int.push_back(i);
    }
    for (int i = 5; i < 15; ++i) {
      it = easyfind(vec_int, i);
      if (it != vec_int.end()) {
        std::cout << "Found the value: [" << *it << "] in the container\n";
      } else {
        std::cout << "Couldn't find the value...\n";
      }
    }
  }
  std::cout << "<Done testing easyfind() to vector<int>>\n";

  std::cout << std::endl;

  // testing list
  // testing deque
}

int main(void) {
  testPlace();
  return 0;
}
