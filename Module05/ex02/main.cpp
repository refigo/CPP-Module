/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:17:31 by mgo               #+#    #+#             */
/*   Updated: 2022/07/15 16:03:56 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

static void testPlace(void) {
  std::cout << std::endl;

  // testing ShrubberyCreationForm
  std::cout << "<Start testing ShrubberyCreationForm>\n";
  {
    ShrubberyCreationForm scf("garden");
    Bureaucrat snr("senior", 1);
    Bureaucrat jnr("junior", 150);

    std::cout << scf;
    jnr.executeForm(scf);
    snr.executeForm(scf);
    snr.signForm(scf);
    jnr.executeForm(scf);
    snr.executeForm(scf);
  }
  std::cout << "<Done testing ShrubberyCreationForm>\n";

  std::cout << std::endl;

  // testing RobotomyRequestForm
  std::cout << "<Start testing RobotomyRequestForm>\n";
  {
    RobotomyRequestForm rrf("factory");
    Bureaucrat snr("senior", 1);
    Bureaucrat jnr("junior", 150);

    std::cout << rrf;
    jnr.executeForm(rrf);
    snr.executeForm(rrf);
    snr.signForm(rrf);
    jnr.executeForm(rrf);
    snr.executeForm(rrf);
    std::cout << '\n';
    for (int i = 0; i < 10; ++i) {
      snr.executeForm(rrf);
      std::cout << '\n';
    }
  }
  std::cout << "<Done testing RobotomyRequestForm>\n";

  std::cout << std::endl;

  // testing PresidentialPardonForm
  std::cout << "<Start testing PresidentialPardonForm>\n";
  {
    PresidentialPardonForm ppf("mgo");
    Bureaucrat snr("senior", 1);
    Bureaucrat jnr("junior", 150);

    std::cout << ppf;
    jnr.executeForm(ppf);
    snr.executeForm(ppf);
    snr.signForm(ppf);
    jnr.executeForm(ppf);
    snr.executeForm(ppf);
  }
  std::cout << "<Done testing PresidentialPardonForm>\n";

  std::cout << std::endl;
}

int main(void) {
  testPlace();
  return 0;
}
