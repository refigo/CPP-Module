/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:17:31 by mgo               #+#    #+#             */
/*   Updated: 2022/07/13 13:18:31 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

static void testPlace(void) {
  std::cout << std::endl;
  
  Bureaucrat brc("testing", 75);
  Form frm("testingForm", 50, 50);

  std::cout << std::endl;
}

int main(void) {
  testPlace();
  //system("leaks bureaucrat");
  return 0;
}
