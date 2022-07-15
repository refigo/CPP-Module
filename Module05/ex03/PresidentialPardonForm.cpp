/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:24:54 by mgo               #+#    #+#             */
/*   Updated: 2022/07/15 16:02:14 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
  : Form(PPF_NAME, PPF_GRADE_SIGN, PPF_GRADE_EXEC), 
    target_(target) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

void PresidentialPardonForm::execute(const Bureaucrat& brcrt) const {
  checkExecutable(brcrt);
  std::cout << target_ << " has been pardoned by Zaphod Beeblebrox.\n";
}

PresidentialPardonForm& PresidentialPardonForm::operator=(\
  const PresidentialPardonForm&) {
  return *this;
}
