/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:09:04 by mgo               #+#    #+#             */
/*   Updated: 2022/07/27 12:18:20 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
 public:
  typedef typename std::stack<T>::container_type::iterator 
    iterator;
  typedef typename std::stack<T>::container_type::reverse_iterator 
    reverse_iterator;
  
  MutantStack(void) : std::stack<T>() {};
  MutantStack(const MutantStack& orig) : std::stack<T>(orig) {};
  MutantStack& operator=(const MutantStack& rhs) {
    std::stack<T>::operator=(rhs);
    return *this;
  };
  ~MutantStack(void) {};

  iterator begin(void) {
    return (this->c.begin());
  }
  iterator end(void) {
    return (this->c.end());
  }

  reverse_iterator rbegin(void) {
    return (this->c.rbegin());
  }
  reverse_iterator rend(void) {
    return (this->c.rend());
  }
};

#endif
