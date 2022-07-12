/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:44:15 by mgo               #+#    #+#             */
/*   Updated: 2022/07/12 17:29:36 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

static void testPlace(void) {
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
    delete tmp;
    tmp = src1->createMateria("cure");
    if (tmp)
      std::cout << "src1 has a " << tmp->getType() << '\n';
    delete tmp;
    delete src1;

    tmp = src2->createMateria("ice");
    if (tmp)
      std::cout << "src2 has a " << tmp->getType() << '\n';
    delete tmp;
    tmp = src2->createMateria("cure");
    if (tmp)
      std::cout << "src2 has a " << tmp->getType() << '\n';
    delete tmp;
    delete src2;
  }

  std::cout << std::endl << std::endl;

  // teting Character
  {
    Character* user = new Character("user");
    Character* dummy = new Character("dummy");
    MateriaSource* src = new MateriaSource();
    AMateria* tmpIce;
    AMateria* tmpCure;

    std::cout << "user name is \'" << user->getName() << "\'\n";
    
    user->useAllItems(*dummy);
    std::cout << "user don't have any item...\n";
    
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    tmpIce = src->createMateria("ice");
    user->equip(tmpIce);
    tmpCure = src->createMateria("cure");
    user->equip(tmpCure);
    std::cout << "user has equipped some items!!\n";

    user->useAllItems(*dummy);
    user->unequip(0);
    delete tmpIce;
    tmpIce = NULL;
    std::cout << "user unequip the number 0 item(ice).\n";
    user->useAllItems(*dummy);
    user->unequip(1);
    delete tmpCure;
    tmpCure = NULL;
    std::cout << "user unequip the number 1 item(cure).\n";
    user->useAllItems(*dummy);
    std::cout << '\n';

    for (int i = 0; i < MAX_INVEN_MTRL_SLOTS; ++i) {
      dummy->equip(src->createMateria("ice"));
    }
    tmpCure = src->createMateria("cure");
    dummy->equip(tmpCure);
    dummy->useAllItems(*dummy);
    
    delete tmpCure;
    delete user;
    delete dummy;
    delete src;
  }

  std::cout << std::endl << std::endl;
}

int	main(void) {
  testPlace();
  //system("leaks a.out");
  return 0;  
}
