/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:05:24 by mgo               #+#    #+#             */
/*   Updated: 2022/07/13 17:08:17 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what(void) const throw() {
  return "The bureaucrat grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw() {
  return "The bureaucrat grade is too low!";
}

Bureaucrat::Bureaucrat(const std::string& name, const int grade)
  : name_(name), 
    grade_(grade) {
  if (grade_ < BRCRT_HIGHEST_GRADE)
    throw GradeTooHighException();
  else if (grade_ > BRCRT_LOWEST_GRADE)
    throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat(void) {}


const std::string& Bureaucrat::getName(void) const {
  return name_;
}

int Bureaucrat::getGrade(void) const {
  return grade_;
}

void Bureaucrat::incrementGrade(void) {
  if (grade_ <= BRCRT_HIGHEST_GRADE)
    throw GradeTooHighException();
  --grade_;
}

void Bureaucrat::decrementGrade(void) {
  if (grade_ >= BRCRT_LOWEST_GRADE)
    throw GradeTooLowException();
  ++grade_;
}

void Bureaucrat::signForm(Form& form) const {
  try {
    form.beSigned(*this);
  } catch (std::exception& e) {
    std::cerr << name_ << "couldn't sign " << form.getName() \
      << "because " << e.what() << ".\n";
  }
}

Bureaucrat::Bureaucrat(void) {}

Bureaucrat::Bureaucrat(const Bureaucrat&) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat&) {
  return *this;
}

std::ostream& operator<<(std::ostream& ostrm, const Bureaucrat& brcrt) {
  ostrm << brcrt.getName() \
    << ", bureaucrat grade " << brcrt.getGrade() << '.';
  return ostrm;
}
