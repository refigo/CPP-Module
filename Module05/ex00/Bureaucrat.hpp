/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:05:23 by mgo               #+#    #+#             */
/*   Updated: 2022/07/12 19:05:44 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>

#define BRCRT_DFLT_NAME "Bureaucrat"
#define BRCRT_HIGHEST_GRADE 1
#define BRCRT_LOWEST_GRADE 150

class Bureaucrat {
 public:
  class GradeTooHighException : public std::exception {
   public:
    const char* what(void) const throw(); // todo: learn
  };
  class GradeTooLowException : public std::exception {
   public:
    const char* what(void) const throw(); // todo: learn
  };

  Bureaucrat(const std::string& name, const int grade);
  Bureaucrat(void);
  Bureaucrat(const Bureaucrat& orig);
  Bureaucrat& operator=(const Bureaucrat& rhs);
  ~Bureaucrat(void);

  void incrementGrade(void);
  void decrementGrade(void);

  const std::string& getName(void) const;
  int getGrade(void) const;

 private:
  const std::string name_;
  int grade_;
};

std::ostream& operator<<(std::ostream& ostrm, const Bureaucrat& brcrt);

#endif
