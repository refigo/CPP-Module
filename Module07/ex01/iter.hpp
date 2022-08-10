/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 09:49:15 by mgo               #+#    #+#             */
/*   Updated: 2022/08/10 19:05:44 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T* arr, std::size_t len, void (*func)(T&)) {
  for (std::size_t i = 0; i < len; ++i) {
    func(arr[i]);
  }
}

/*
template <typename T>
void iter(T* arr, std::size_t len, void (*func)(const T&)) {
  for (std::size_t i = 0; i < len; ++i) {
    func(arr[i]);
  }
}
*/

template <typename T>
void printArg(T& arg) {
  std::cout << arg << '\t';
}

#endif
