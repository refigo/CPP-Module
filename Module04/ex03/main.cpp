
/*
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"

int main(void) {
  Ice test_i;
  Cure test_c;
  AMateria  *ptr_am;

  std::cout << test_i.getType() << '\n';
  std::cout << test_c.getType() << '\n';
  ptr_am = test_c.clone();
  std::cout << ptr_am->getType() << '\n';
  return (0);
}
*/


#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main(void) {
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
  return 0;  
}
