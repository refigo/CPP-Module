/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 09:24:48 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 14:07:10 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int	main(void) {
  std::cout << std::endl;
  
  // testing Animal, Dog and Cat
  std::cout << "<Start testing Animal, Dog and Cat>\n";
  {
    const Animal*	meta = new Animal();
    const Animal*	j = new Dog();
    const Animal*	i = new Cat();
    std::cout << '\n';

    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    std::cout << '\n';

    std::cout << i->getType() << " sounds -> ";
    i->makeSound(); //will output the cat sound!
    std::cout << j->getType() << " sounds -> ";
    j->makeSound();
    std::cout << meta->getType() << " sounds -> ";
    meta->makeSound();
    std::cout << '\n';

    delete i;
    delete j;
    delete meta;
  }
  std::cout << "<Finish testing Animal, Dog and Cat>\n";
  std::cout << std::endl << std::endl;

  // testing WrongAnimal and wrongCat
  std::cout << "<Start testing WrongAnimal and WrongCat>\n";
  {
    const WrongAnimal*	w_anml = new WrongAnimal();
    const WrongAnimal*	w_cat = new WrongCat();
    std::cout << '\n';

    std::cout << w_anml->getType() << std::endl;
    std::cout << w_cat->getType() << std::endl;
    std::cout << '\n';

    std::cout << w_anml->getType() << " sounds -> ";
    w_anml->makeSound();
    std::cout << w_cat->getType() << " sounds -> ";
    w_cat->makeSound();
    std::cout << '\n';

    delete w_cat;
    delete w_anml;
  }
  std::cout << "<Finish testing WrongAnimal and WrongCat>\n";
  std::cout << std::endl;

  //system("leaks a.out");  
  return 0;
}
