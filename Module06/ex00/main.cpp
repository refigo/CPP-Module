/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:18:02 by mgo               #+#    #+#             */
/*   Updated: 2022/08/01 13:14:33 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

static void convertToScalar(char *arg) {
  Scalar  sclr(arg);

  sclr.printAll();
}

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "./convert [ string to convert ]\n";
    return 1;
  }
  convertToScalar(argv[1]);
  return 0;
}
