/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:19:46 by mgo               #+#    #+#             */
/*   Updated: 2022/07/25 09:24:11 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T& a, T& b) {
  T temp(a);
  a = b;
  b = temp;
}

template <typename T>
T& min(T& a, T& b) {
  return (a < b ? a : b);
}

template <typename T>
T& max(T& a, T& b) {
  return (a > b ? a : b);
}

#endif
