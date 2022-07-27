/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:09:26 by mgo               #+#    #+#             */
/*   Updated: 2022/07/27 14:09:14 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <stack>
#include <list>
#include <string>
#include <iostream>

void testPlace(void) {
  std::cout << std::endl;

  // pdf test
  std::cout << "<Start pdf test>\n";
  {
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
      std::cout << *it << std::endl;
      ++it;
    }
    std::stack<int> s(mstack);
  }
  std::cout << "<Done pdf test>\n";

  std::cout << std::endl;

  // test basic stack member functions
  std::cout << "<Start basic stack member fucntions test>\n";
  {
    MutantStack<char> mstackc;
    std::cout << std::boolalpha;
    std::cout << "is mstackc empty: [" << mstackc.empty() << "]\n";
    mstackc.push('a');
    mstackc.push('b');
    mstackc.push('c');
    std::cout << "mstackc size: [" << mstackc.size() << "]\n";
    std::cout << "mstackc top: [" << mstackc.top() << "]\n";
    mstackc.pop();
    std::cout << "mstackc top after pop: [" << mstackc.top() << "]\n";
    MutantStack<char> toswap;
    mstackc.swap(toswap);
    std::cout << "mstackc size after swap: [" << mstackc.size() << "]\n";
    std::cout << "toswap size after swap: [" << toswap.size() << "]\n";
  }
  std::cout << "<Done basic stack member fucntions>\n";

  std::cout << std::endl;

  // test iterator and reverse_iterator
  std::cout << "<Start iterator and reverse_iterator test>\n";
  {
    MutantStack<int> mstackd;
    for (int i = 0; i < 10; ++i) {
      mstackd.push(i);
    }
    MutantStack<int>::iterator it = mstackd.begin();
    MutantStack<int>::iterator ite = mstackd.end();
    std::cout << "printing on order\n";
    while (it != ite) {
      std::cout << '\t' << *it << '\n';
      ++it;
    }
    std::cout << '\n';
    MutantStack<int>::reverse_iterator rit = mstackd.rbegin();
    MutantStack<int>::reverse_iterator rite = mstackd.rend();
    std::cout << "printing on reverse order\n";
    while (rit != rite) {
      std::cout << '\t' << *rit << '\n';
      ++rit;
    }
  }
  std::cout << "<Done iterator and reverse_iterator test>\n";

  std::cout << std::endl;

  // test MutantStack<double>
  std::cout << "<Start MutantStack<double> test>\n";
  {
    MutantStack<double> mstackd;
    mstackd.push(0.1);
    mstackd.push(1.2);
    mstackd.push(2.3);
    mstackd.push(3.4);
    mstackd.push(4.5);
    mstackd.push(5.6);
    MutantStack<double> copy_mstackd(mstackd);
    MutantStack<double>::iterator it = copy_mstackd.begin();
    MutantStack<double>::iterator ite = copy_mstackd.end();
    std::cout << "printing on order\n";
    while (it != ite) {
      std::cout << '\t' << *it << '\n';
      ++it;
    }
  }
  std::cout << "<Done MutantStack<double> test>\n";

  std::cout << std::endl;

  // test MutantStack<std::string>
  std::cout << "<Start MutantStack<std::string> test>\n";
  {
    MutantStack<std::string> mstacks;
    mstacks.push("Goodbye");
    mstacks.push("CPP-Module");
    mstacks.push("and");
    mstacks.push("Hello");
    mstacks.push("5 Circle");
    MutantStack<std::string> assgn_mstacks;
    assgn_mstacks = mstacks;
    MutantStack<std::string>::iterator it = assgn_mstacks.begin();
    MutantStack<std::string>::iterator ite = assgn_mstacks.end();
    std::cout << "printing on order\n";
    while (it != ite) {
      std::cout << '\t' << *it << '\n';
      ++it;
    }
  }
  std::cout << "<Done MutantStack<std::string> test>\n";

  std::cout << std::endl;
}

int main(void) {
  testPlace();
  return 0;
}
