/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:22:15 by mgo               #+#    #+#             */
/*   Updated: 2022/07/15 17:11:59 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define INTRN_FORM_NUM 3
#define INTRN_SCF_NAME "shruberry creation"
#define INTRN_RRF_NAME "robotomy request"
#define INTRN_PPF_NAME "presidential pardon"

class Intern {
 public:
  Intern(void);
  ~Intern(void);

  Form* makeForm(const std::string& form_name, 
                const std::string& form_target);
  
 private:
  Intern(const Intern&);
  Intern& operator=(const Intern&);
};

#endif