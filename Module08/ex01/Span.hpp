/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:35:05 by mgo               #+#    #+#             */
/*   Updated: 2022/07/27 18:15:13 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <set>
#include <exception>

class Span {
 public:
  Span(void);
  Span(unsigned int maxsize);
  Span(const Span& orig);
  Span& operator=(const Span& rhs);
  ~Span(void);

  void addNumber(int number);
  
  template <typename T>
  void addNumbers(T begin, T end) {
    if (maxsize_ < data_.size() + std::distance(begin, end)) {
      throw NotEnoughSpaceException();
    }
    data_.insert(begin, end);
  }

  unsigned int shortestSpan(void) const;
  unsigned int longestSpan(void) const;

  unsigned int getMaxsize(void) const;
  
 private:
  const unsigned int maxsize_;
  std::multiset<int> data_;

  class NotEnoughSpaceException : public std::exception {
   public:
    const char* what(void) const throw();
  };
  class NotEnoughSizeException : public std::exception {
   public:
    const char* what(void) const throw();
  };
};

#endif
