/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:17:31 by mgo               #+#    #+#             */
/*   Updated: 2022/07/13 10:43:25 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
  Bureaucrat testing("testing", 1);

  std::cout << testing << '\n';
  try {
    testing.incrementGrade();
    std::cout << testing << '\n';
  }
  catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  return 0;
}
