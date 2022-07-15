/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:36:20 by mgo               #+#    #+#             */
/*   Updated: 2022/07/15 17:33:31 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {};

Intern::~Intern(void) {};

Form* Intern::makeForm(const std::string& form_name, 
                      const std::string& form_target) {
  std::string form_names[INTRN_FORM_NUM] = { 
                                            INTRN_SCF_NAME,
                                            INTRN_RRF_NAME,
                                            INTRN_PPF_NAME 
                                           };
  for (int i = 0; i < INTRN_FORM_NUM; ++i) {
    if (form_names[i] == form_name) {
      std::cout << "Intern creates " << form_name << '\n';
      switch (i) {
        case 0:
          return (new ShrubberyCreationForm(form_target));
        case 1:
          return (new RobotomyRequestForm(form_target));
        case 2:
          return (new PresidentialPardonForm(form_target));
      }
    }
  }
  std::cout << "Intern cannot create " << form_name << "...\n";
  return NULL;
}
  
Intern& Intern::operator=(const Intern&) {
  return *this;
}
