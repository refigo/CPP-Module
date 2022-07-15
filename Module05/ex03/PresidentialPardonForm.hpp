/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:42:35 by mgo               #+#    #+#             */
/*   Updated: 2022/07/15 17:49:38 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"

#define PPF_NAME "PresidentialPardonForm"
#define PPF_GRADE_SIGN 25
#define PPF_GRADE_EXEC 5

class PresidentialPardonForm : public Form {
  public:
  PresidentialPardonForm(const std::string& target);
  virtual ~PresidentialPardonForm(void);

  void execute(const Bureaucrat& brcrt) const;

 private:
  PresidentialPardonForm(void);
  PresidentialPardonForm(const PresidentialPardonForm&);
  PresidentialPardonForm& operator=(const PresidentialPardonForm&);
};

#endif
