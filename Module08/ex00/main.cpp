/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:21:13 by mgo               #+#    #+#             */
/*   Updated: 2022/07/25 16:51:24 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

void testPlace(void) {
  std::cout << std::endl;

  // testing easyfind() at vector<int>
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

  // testing easyfind() at list<int>
  std::cout << "<Start testing easyfind() to list<int>>\n";
  {
    std::list<int> li_int;
    std::list<int>::iterator it;

    for (int i = 0; i < 10; ++i) {
      li_int.push_back(i);
    }
    for (int i = 5; i < 15; ++i) {
      it = easyfind(li_int, i);
      if (it != li_int.end()) {
        std::cout << "Found the value: [" << *it << "] in the container\n";
      } else {
        std::cout << "Couldn't find the value...\n";
      }
    }
  }
  std::cout << "<Done testing easyfind() to list<int>>\n";

  std::cout << std::endl;
  
  // testing easyfind() at deque<int>
  std::cout << "<Start testing easyfind() to deque<int>>\n";
  {
    std::deque<int> deq_int;
    std::deque<int>::iterator it;

    for (int i = 0; i < 10; ++i) {
      deq_int.push_back(i);
    }
    for (int i = 5; i < 15; ++i) {
      it = easyfind(deq_int, i);
      if (it != deq_int.end()) {
        std::cout << "Found the value: [" << *it << "] in the container\n";
      } else {
        std::cout << "Couldn't find the value...\n";
      }
    }
  }
  std::cout << "<Done testing easyfind() to deque<int>>\n";

  std::cout << std::endl;
}

int main(void) {
  testPlace();
  return 0;
}
