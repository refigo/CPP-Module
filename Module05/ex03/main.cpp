/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:17:31 by mgo               #+#    #+#             */
/*   Updated: 2022/07/15 17:28:55 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

static void printAndCleanPform(Form** ppform) {
  Form* pform;

  pform = *ppform;
  if (pform) {
    std::cout << *pform << '\n';
    delete pform;
    *ppform = NULL;
  }
}

static void testPlace(void) {
  std::cout << std::endl;

  // testing Intern
  std::cout << "<Start testing Intern>\n";
  {
    Form* pform;
    Intern someone;
    
    pform = someone.makeForm("shruberry creation", "garden");
    printAndCleanPform(&pform);
    pform = someone.makeForm("robotomy request", "factory");
    printAndCleanPform(&pform);
    pform = someone.makeForm("presidential pardon", "mgo");
    printAndCleanPform(&pform);
    pform = someone.makeForm("outer teleporting", "mgo");
    printAndCleanPform(&pform);
  }
  std::cout << "<Done testing Intern>\n";

  std::cout << std::endl;
}

int main(void) {
  testPlace();
  system("leaks a.out");
  return 0;
}
