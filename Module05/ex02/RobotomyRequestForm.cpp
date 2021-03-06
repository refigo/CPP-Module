/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 14:55:02 by mgo               #+#    #+#             */
/*   Updated: 2022/07/15 17:49:23 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
  : Form(RRF_NAME, RRF_GRADE_SIGN, RRF_GRADE_EXEC, target) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

void RobotomyRequestForm::execute(const Bureaucrat& brcrt) const {
  checkExecutable(brcrt);
  std::cout << "drrrrrrr... drr..! drrrr..!\n";
  if (std::rand() % 2) {
    std::cout << getTarget() << " has been robotomized successfully!\n";
  } else {
    std::cout << getTarget() << " failed to be robotomized...\n";
  }
}

RobotomyRequestForm& RobotomyRequestForm::operator=(\
  const RobotomyRequestForm&) {
  return *this;
}
