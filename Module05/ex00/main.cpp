/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:17:31 by mgo               #+#    #+#             */
/*   Updated: 2022/07/12 19:11:45 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
  Bureaucrat mgo("mgo", 1);
  std::cout << mgo << '\n';
  try {
    mgo.incrementGrade();
    std::cout << mgo << '\n';
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  //std::cout << "none\n";
  return 0;
}