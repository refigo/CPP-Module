/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:50:31 by mgo               #+#    #+#             */
/*   Updated: 2022/07/15 17:48:17 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
  : Form(SCF_NAME, SCF_GRADE_SIGN, SCF_GRADE_EXEC, target) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

void ShrubberyCreationForm::execute(const Bureaucrat& brcrt) const {
  checkExecutable(brcrt);
  std::ofstream out_file(getTarget() + "_shrubbery");
  if (out_file.is_open()) {
    out_file << "    @$%&@   &@$%&%@\n"
                " @$&@ &@$% @$%&@%$&@@\n"
                "@$%&\\%&@$ @$/%&$ /$%&@\n"
                "@&%$@ $@&% &$%& /$%&@\n"
                " @&%$\\@&%$@&/%$/&%$@\n"
                "  @&%&\\@&\\  /@@/&$@\n"
                "       \\  \\/ /\n"
                "        | . /\n"
                "        |  |\n"
                "        |o |\n"
                "        |  |\n"
                "        |. |\n"
                " ______/____\\____" << std::endl;
    out_file.close();
  } else {
    std::cerr << "failed to create " << getTarget() << "_shrubbery" << "...\n";
  }
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(\
  const ShrubberyCreationForm&) {
  return *this;
}
