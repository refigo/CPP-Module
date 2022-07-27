/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:49:30 by mgo               #+#    #+#             */
/*   Updated: 2022/07/27 18:29:10 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>

template <typename T>
class Array {
 public:
  Array(void) 
    : length_(0), data_(NULL) {}
  Array(unsigned int n) 
    : length_(n), data_(new T[n]) {}
  Array(const Array& orig) 
    : length_(0), data_(NULL) {
    *this = orig;
  }
  Array& operator=(const Array& rhs) {
    if (this != &rhs) {
      length_ = rhs.length_;
      delete[] data_;
      data_ = NULL;
      data_ = new T[length_];
      for (unsigned int i = 0; i < length_; ++i) {
        data_[i] = rhs.data_[i];
      }
    }
    return *this;
  }
  ~Array(void) {
    delete[] data_;
    data_ = NULL;
  }

  unsigned int size(void) const {
    return length_;
  }

  T& operator[](unsigned int index) {
    if (index >= length_) {
      throw std::out_of_range("Index is out of range!");
    }
    return data_[index];
  }

  const T& operator[](unsigned int index) const {
    if (index >= length_) {
      throw std::out_of_range("Index is out of range!");
    }
    return data_[index];
  }

  void printElems() const {
    for (unsigned int i = 0; i < length_; ++i) {
      std::cout << data_[i] << '\t';
    }
    std::cout << std::endl;
  }

 private:
  unsigned int length_;
  T* data_;
};

#endif
