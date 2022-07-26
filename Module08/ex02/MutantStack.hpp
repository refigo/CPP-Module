/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:09:04 by mgo               #+#    #+#             */
/*   Updated: 2022/07/26 19:12:17 by mgo              ###   ########.fr       */
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
  typedef typename std::stack<T>::container_type::const_iterator 
    const_iterator;
  typedef typename std::stack<T>::container_type::reverse_iterator 
    reverse_iterator;
  typedef typename std::stack<T>::container_type::const_reverse_iterator 
    const_reverse_iterator;

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

 private:
};

#endif
