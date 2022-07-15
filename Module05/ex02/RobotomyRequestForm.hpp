/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:44:08 by mgo               #+#    #+#             */
/*   Updated: 2022/07/15 17:48:52 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include "Form.hpp"

#define RRF_NAME "RobotomyRequestForm"
#define RRF_GRADE_SIGN 72
#define RRF_GRADE_EXEC 45

class RobotomyRequestForm : public Form {
 public:
  RobotomyRequestForm(const std::string& target);
  virtual ~RobotomyRequestForm(void);

  void execute(const Bureaucrat& brcrt) const;

 private:
  RobotomyRequestForm(void);
  RobotomyRequestForm(const RobotomyRequestForm&);
  RobotomyRequestForm& operator=(const RobotomyRequestForm&);
};

#endif
