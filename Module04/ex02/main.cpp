/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 09:24:48 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 18:16:03 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

static void print_animal_brain_ideas(Animal* ptr_anml) {
  std::string anml_type;

  anml_type = ptr_anml->getType();
  for (int i = 0; i < IDEAS_MAX + 2; ++i) {
    std::cout << "Brain ideas[" << i << "]: <";
    if (anml_type == DOG_TYPE) {
      std::cout << dynamic_cast<Dog*>(ptr_anml)->getBrainIdea(i);
    } else if (anml_type == CAT_TYPE) {
      std::cout << dynamic_cast<Cat*>(ptr_anml)->getBrainIdea(i);
    } else {
      return ;
    }
    std::cout << ">\n";
  }
  std::cout << '\n';
}

int	main(void) {
  //Animal  init;
  std::cout << std::endl;

  // check leaks after destructor
  std::cout << "<Check leaks after destructor>\n";
  {
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << '\n';

    delete j;  //should not create a leak
    delete i;
    std::cout << '\n';
    system("leaks a.out");
  }
  std::cout << "<Done checking leaks after destructor>\n";
  std::cout << std::endl << std::endl;

  // test Dog having Brain
  std::cout << "<Start testing Dog having Brain>\n";
  {
    Dog training_dog;

    training_dog.setBrainIdea(0, "food");
    training_dog.setBrainIdea(1, "master");
    training_dog.setBrainIdea(2, "bone");
    training_dog.setBrainIdea(50, "toy");
    training_dog.setBrainIdea(100, "cat");
    print_animal_brain_ideas(&training_dog);
  }
  std::cout << "<Done testing Dog having Brain>\n";
  std::cout << std::endl << std::endl;

  // test Cat having Brain
  std::cout << "<Start testing Cat having Brain>\n";
  {
    Cat training_cat;

    training_cat.setBrainIdea(0, "food");
    training_cat.setBrainIdea(-1, "master");
    training_cat.setBrainIdea(2, "box");
    training_cat.setBrainIdea(50, "toy");
    print_animal_brain_ideas(&training_cat);
  }
  std::cout << "<Done testing Cat having Brain>\n";
  std::cout << std::endl;

  //system("leaks a.out");
  return 0;
}
