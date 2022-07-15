/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:44:55 by mgo               #+#    #+#             */
/*   Updated: 2022/07/15 14:29:33 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"
#include <fstream>

#define SCF_NAME "ShrubberyCreationForm"
#define SCF_GRADE_SIGN 145
#define SCF_GRADE_EXEC 137

class ShrubberyCreationForm : public Form {
 public:
  ShrubberyCreationForm(const std::string& target);
  virtual ~ShrubberyCreationForm(void);

  void execute(const Bureaucrat& brcrt) const;

 private:
  const std::string target_;

  ShrubberyCreationForm(void);
  ShrubberyCreationForm(const ShrubberyCreationForm&);
  ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
};

#endif
