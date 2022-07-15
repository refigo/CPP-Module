/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:46:43 by mgo               #+#    #+#             */
/*   Updated: 2022/07/15 14:31:46 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <exception>

class Form {
 public:
  class GradeTooHighException : public std::exception {
   public:
    const char* what(void) const throw();
  };
  class GradeTooLowException : public std::exception {
   public:
    const char* what(void) const throw();
  };
  class NotSignedException : public std::exception {
   public:
    const char* what(void) const throw();
  };

  Form(const std::string& name, int grade_sign, int grade_exec);
  virtual ~Form();

  const std::string& getName(void) const;
  bool getSigned(void) const;
  int getGradeSign(void) const;
  int getGradeExec(void) const;

  void beSigned(const Bureaucrat& brcrt);

  void checkExecutable(const Bureaucrat& brcrt) const;
  virtual void execute(const Bureaucrat& brcrt) const = 0;

 private:
  const std::string name_;
  bool signed_;
  const int grade_sign_;
  const int grade_exec_;

  Form(void);
  Form(const Form&);
  Form& operator=(const Form&);
};

std::ostream& operator<<(std::ostream& ostrm, const Form& form);

#endif
