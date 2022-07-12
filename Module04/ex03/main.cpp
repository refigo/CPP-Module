/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:44:15 by mgo               #+#    #+#             */
/*   Updated: 2022/07/12 10:46:07 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main(void) {

  // test case in pdf
  {
    IMateriaSource* src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
  }

  std::cout << std::endl;

  // testing MateriaSource
  {
    MateriaSource* src1 = new MateriaSource();
    MateriaSource* src2 = new MateriaSource(*src1);
    AMateria* tmp;

    src1->learnMateria(new Ice());
    *src2 = *src1;
    src1->learnMateria(new Cure());

    tmp = src1->createMateria("ice");
    if (tmp)
      std::cout << "src1 has a " << tmp->getType() << '\n';
    tmp = src1->createMateria("cure");
    if (tmp)
      std::cout << "src1 has a " << tmp->getType() << '\n';
    delete src1;

    tmp = src2->createMateria("ice");
    if (tmp)
      std::cout << "src2 has a " << tmp->getType() << '\n';
    tmp = src2->createMateria("cure");
    if (tmp)
      std::cout << "src2 has a " << tmp->getType() << '\n';
    delete src2;
  }

  std::cout << std::endl;

  // teting Character
  {
    Character* user = new Character("user");
    Character* dummy = new Character("dummy");
    MateriaSource* src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    user->equip(src->createMateria("ice"));
    user->equip(src->createMateria("cure"));

    std::cout << "user name is \'" << user->getName() << "\'\n";
  
    user->use(0, *dummy);
    user->unequip(0);
    std::cout << "user unequip the number 0 item(ice).\n";
    user->use(0, *dummy);

    user->use(1, *user);
    user->unequip(1);
    std::cout << "user unequip the number 1 item(cure).\n";
    user->use(1, *user);
    
    delete user;
    delete dummy;
    delete src;
  }

  std::cout << std::endl;

  //system("leaks a.out");
  return 0;  
}
