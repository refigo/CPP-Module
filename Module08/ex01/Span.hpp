/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:35:05 by mgo               #+#    #+#             */
/*   Updated: 2022/07/26 10:43:23 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

class Span {
 public:
  Span(unsigned int N);
  Span& operator=(const Span& rhs);
  ~Span(void);

  void addNumber(int num);

  //shortestSpan()
  //longestSpan()
  
 private:
  unsigned int N;
  int* datas_;

  Span(void);
  Span(const Span&);
};

#endif
