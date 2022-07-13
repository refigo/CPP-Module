/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:28:45 by mgo               #+#    #+#             */
/*   Updated: 2022/07/13 16:54:15 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char* Form::GradeTooHighException::what(void) const throw() {
  return "The grade is too high!";
}

const char* Form::GradeTooLowException::what(void) const throw() {
  return "The grade is too low!";
}

Form::Form(const std::string& name, int grade_sign, int grade_exec)
  : name_(name), 
    signed_(false), 
    grade_sign_(grade_sign), 
    grade_exec_(grade_exec) {
  if (grade_sign_ < BRCRT_HIGHEST_GRADE\
   || grade_exec_ < BRCRT_HIGHEST_GRADE) {
    throw GradeTooHighException();
  } else if (grade_sign_ > BRCRT_LOWEST_GRADE\
          || grade_exec_ > BRCRT_LOWEST_GRADE) {
    throw GradeTooLowException();
  }
}

Form::~Form() {}

const std::string& Form::getName(void) const {
  return name_;
}

bool Form::getSigned(void) const {
  return signed_;
}

int Form::getGradeSign(void) const {
  return grade_sign_;
}

int Form::getGradeExec(void) const {
  return grade_exec_;
}

void Form::beSigned(Bureaucrat& brcrt) {
  if (brcrt.getGrade() > grade_sign_) {
    throw GradeTooLowException();
  } else {
    signed_ = true;
  }
}

Form& Form::operator=(const Form&) {
  return *this;
}

std::ostream& operator<<(std::ostream& ostrm, const Form& form) {
  ostrm << form.getName();
  return ostrm;
}
