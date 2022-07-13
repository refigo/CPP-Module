/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:05:23 by mgo               #+#    #+#             */
/*   Updated: 2022/07/13 16:21:30 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>

#define BRCRT_HIGHEST_GRADE 1
#define BRCRT_LOWEST_GRADE 150

class Bureaucrat {
 public:
  class GradeTooHighException : public std::exception {
   public:
    const char* what(void) const throw();
  };
  class GradeTooLowException : public std::exception {
   public:
    const char* what(void) const throw();
  };

  Bureaucrat(const std::string& name, const int grade);
  ~Bureaucrat(void);

  const std::string& getName(void) const;
  int getGrade(void) const;

  void incrementGrade(void);
  void decrementGrade(void);

 private:
  const std::string name_;
  int grade_;

  Bureaucrat(void);
  Bureaucrat(const Bureaucrat& orig);
  Bureaucrat& operator=(const Bureaucrat& rhs);
};

std::ostream& operator<<(std::ostream& ostrm, const Bureaucrat& brcrt);

#endif
