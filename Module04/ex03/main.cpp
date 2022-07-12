/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:44:15 by mgo               #+#    #+#             */
/*   Updated: 2022/07/12 10:58:27 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main(void) {
  std::cout << std::endl;

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

  std::cout << std::endl << std::endl;

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

  std::cout << std::endl << std::endl;

  // teting Character
  {
    Character* user = new Character("user");
    Character* dummy = new Character("dummy");
    MateriaSource* src = new MateriaSource();

    std::cout << "user name is \'" << user->getName() << "\'\n";
    
    for (int i = 0; i < MAX_INVEN_MTRL_SLOTS; ++i)
      user->use(i, *dummy);
    std::cout << "user don't have any item...\n";
    
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    user->equip(src->createMateria("ice"));
    user->equip(src->createMateria("cure"));
    std::cout << "user has equipped some items!!\n";

    for (int i = 0; i < MAX_INVEN_MTRL_SLOTS; ++i)
      user->use(i, *dummy);
    user->unequip(0);
    std::cout << "user unequip the number 0 item(ice).\n";
    for (int i = 0; i < MAX_INVEN_MTRL_SLOTS; ++i)
      user->use(i, *dummy);
    user->unequip(1);
    std::cout << "user unequip the number 1 item(cure).\n";
    for (int i = 0; i < MAX_INVEN_MTRL_SLOTS; ++i)
      user->use(i, *dummy);
    std::cout << '\n';

    for (int i = 0; i < MAX_INVEN_MTRL_SLOTS; ++i)
      dummy->equip(src->createMateria("ice"));
    user->equip(src->createMateria("cure"));
    for (int i = 0; i < MAX_INVEN_MTRL_SLOTS; ++i)
      dummy->use(i, *dummy);
    
    delete user;
    delete dummy;
    delete src;
  }

  std::cout << std::endl << std::endl;

  //system("leaks a.out");
  return 0;  
}
