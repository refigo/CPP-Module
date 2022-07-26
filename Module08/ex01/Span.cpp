/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:46:48 by mgo               #+#    #+#             */
/*   Updated: 2022/07/26 17:20:32 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <climits> // UINT_MAX

#include <iostream>

Span::Span(void) 
  : maxsize_(0), data_() {}

Span::Span(unsigned int maxsize) 
  : maxsize_(maxsize), data_() {}

Span::Span(const Span& orig) 
  : maxsize_(0), data_() {
  *this = orig;
}

Span& Span::operator=(const Span& rhs) {
  if (this != &rhs) {
    const_cast<unsigned int&>(maxsize_) = rhs.maxsize_;
    data_ = rhs.data_;
  }
  return *this;
}

Span::~Span(void) {}

void Span::addNumber(int num) {
  if (maxsize_ <= data_.size()) {
    throw NotEnoughSpaceException();
  }
  data_.insert(num);
}

unsigned int Span::shortestSpan(void) const {
  if (data_.size() < 2) {
    throw NotEnoughSizeException();
  }
  unsigned int ret(UINT_MAX);
  std::multiset<int>::const_iterator it(data_.begin());

  while (std::next(it, 1) != data_.end()) {
    unsigned int curr_span(0);
    
    curr_span = *(std::next(it, 1)) - *it;
    if (curr_span < ret) {
      ret = curr_span;
      if (ret == 0) {
        break ;
      }
    }
    ++it;
  }
  return (ret);
}

unsigned int Span::longestSpan(void) const {
  if (data_.size() < 2) {
    throw NotEnoughSizeException();
  }
  unsigned int ret(0);
  
  ret = *(data_.rbegin()) - *(data_.begin());
  return (ret);
}

unsigned int Span::getMaxsize(void) const {
  return maxsize_;
}
