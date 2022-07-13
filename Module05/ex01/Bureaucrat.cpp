/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:05:24 by mgo               #+#    #+#             */
/*   Updated: 2022/07/13 10:48:34 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what(void) const throw() {
  return "Exception: The bureaucrat grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw() {
  return "Exception: The bureaucrat grade is too low!";
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

const std::string& Bureaucrat::getName(void) const {
  return name_;
}

int Bureaucrat::getGrade(void) const {
  return grade_;
}

Bureaucrat::Bureaucrat(void) {}

Bureaucrat::Bureaucrat(const Bureaucrat& orig) {
  (void)orig;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
  (void)rhs;
  return *this;
}

std::ostream& operator<<(std::ostream& ostrm, const Bureaucrat& brcrt) {
  ostrm << brcrt.getName() \
    << ", bureaucrat grade " << brcrt.getGrade() << '.';
  return ostrm;
}
