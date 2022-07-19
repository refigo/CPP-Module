/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:18:02 by mgo               #+#    #+#             */
/*   Updated: 2022/07/19 18:08:59 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "./convert [ string to convert ]\n";
    return 1;
  }

  Scalar  mgo(argv[1]);
  
  std::cout << mgo;

  // parse
  // tood: convert to char
  // tood: convert to int
  // tood: convert to float
  // tood: convert to double
  
  return 0;
}
