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

static void tryCtorForm(const std::string& name, \
                        int grade_sign, int grade_exec) {
  try {
    Form ctor(name, grade_sign, grade_exec);
    std::cout << ctor;
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
}

static void testPlace(void) {
  std::cout << std::endl;

  // testing Form construction
  std::cout << "<Start testing Form construction>\n";
  {
    tryCtorForm("tryingCtorForm", 1, 1);
    tryCtorForm("tryingCtorForm", 0, 1);
    tryCtorForm("tryingCtorForm", 150, 1);
    tryCtorForm("tryingCtorForm", 151, 1);
    std::cout << '\n';
    tryCtorForm("tryingCtorForm", 1, 1);
    tryCtorForm("tryingCtorForm", 1, 0);
    tryCtorForm("tryingCtorForm", 1, 150);
    tryCtorForm("tryingCtorForm", 1, 151);
    std::cout << '\n';
  }
  std::cout << "<Done testing Form construction>\n";

  std::cout << std::endl << std::endl;

  // testing signForm
  std::cout << "<Start testing signForm()>\n";
  {
    Bureaucrat testing_sign("testingSign", 75);
    
    Form form_lower("formLower", 150, 1);
    std::cout << form_lower;
    std::cout << testing_sign << '\n';
    testing_sign.signForm(form_lower);
    std::cout << form_lower;
    std::cout << '\n';

    Form form_equal("formEqual", 75, 1);
    std::cout << form_equal;
    std::cout << testing_sign << '\n';
    testing_sign.signForm(form_equal);
    std::cout << form_equal;
    std::cout << '\n';

    Form form_higher("FormHigher", 1, 1);
    std::cout << form_higher;
    std::cout << testing_sign << '\n';
    testing_sign.signForm(form_higher);
    std::cout << form_higher;
    std::cout << '\n';
  }
  std::cout << "<Done testing signForm()>\n";
  std::cout << std::endl;
}

int main(void) {
  testPlace();
  return 0;
}
