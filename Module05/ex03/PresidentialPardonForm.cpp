/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:24:54 by mgo               #+#    #+#             */
/*   Updated: 2022/07/15 17:50:39 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
  : Form(PPF_NAME, PPF_GRADE_SIGN, PPF_GRADE_EXEC, target) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

void PresidentialPardonForm::execute(const Bureaucrat& brcrt) const {
  checkExecutable(brcrt);
  std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox.\n";
}

PresidentialPardonForm& PresidentialPardonForm::operator=(\
  const PresidentialPardonForm&) {
  return *this;
}
