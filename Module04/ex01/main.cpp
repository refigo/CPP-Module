/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 09:24:48 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 19:37:42 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int	main(void) {
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
    //system("leaks a.out");
  }
  std::cout << "<Done checking leaks after destructor>\n";
  std::cout << std::endl << std::endl;

  // test Dog having Brain
  std::cout << "<Start testing Dog having Brain>\n";
  {
    Dog* training_dog = new Dog();
    Dog* copy_dog;

    training_dog->setBrainIdea(0, "food");
    training_dog->setBrainIdea(1, "master");
    training_dog->setBrainIdea(2, "bone");
    training_dog->setBrainIdea(50, "toy");
    training_dog->setBrainIdea(100, "cat");
    // print animal brain ideas
    for (int i = 0; i < IDEAS_MAX + 2; ++i) {
      std::cout << "Brain ideas[" << i << "]: " \
        << '<' << training_dog->getBrainIdea(i) << '>' << '\n';
    }
    std::cout << '\n';

    copy_dog = new Dog(*training_dog);
    delete training_dog;
    for (int i = 0; i < IDEAS_MAX + 2; ++i) {
      std::cout << "Brain ideas[" << i << "]: " \
        << '<' << copy_dog->getBrainIdea(i) << '>' << '\n';
    }
    std::cout << '\n';
  }
  std::cout << "<Done testing Dog having Brain>\n";
  std::cout << std::endl << std::endl;

  // test Cat having Brain
  std::cout << "<Start testing Cat having Brain>\n";
  {
    Cat* training_cat = new Cat();
    Cat* copy_cat;

    training_cat->setBrainIdea(0, "food");
    training_cat->setBrainIdea(-1, "master");
    training_cat->setBrainIdea(2, "box");
    training_cat->setBrainIdea(50, "toy");
    for (int i = 0; i < IDEAS_MAX + 2; ++i)
      std::cout << "Brain ideas[" << i << "]: " \
        << '<' << training_cat->getBrainIdea(i) << '>' << '\n';
    std::cout << '\n';

    copy_cat = new Cat(*training_cat);
    delete training_cat;

    for (int i = 0; i < IDEAS_MAX + 2; ++i)
      std::cout << "Brain ideas[" << i << "]: " \
        << '<' << copy_cat->getBrainIdea(i) << '>' << '\n';
    std::cout << '\n';
  }
  std::cout << "<Done testing Cat having Brain>\n";
  std::cout << std::endl << std::endl;

  // test array of Animal
  std::cout << "<Start testing array of Animal>\n";
  {
    Animal  *metas[4];
    std::cout << '\n';

    for (int i = 0; i < 4; ++i) {
      if (i < 2)
        metas[i] = new Dog();
      else
        metas[i] = new Cat();
    }
    std::cout << '\n';
  
    *(metas[1]) = *(metas[0]);
    dynamic_cast<Dog*>(metas[0])->setBrainIdea(50, "I'm number 0 Dog");
    dynamic_cast<Dog*>(metas[1])->setBrainIdea(50, "I'm number 1 Dog");
    *metas[3] = *(metas[2]);
    dynamic_cast<Cat*>(metas[2])->setBrainIdea(50, "I'm number 2 Cat");
    dynamic_cast<Cat*>(metas[3])->setBrainIdea(50, "I'm number 3 Cat");
    std::cout << '\n';
    
    for (int i = 0; i < 4; ++i) {
      std::cout << "metas[" << i << "] has a idea: ";
      if (metas[i]->getType() == DOG_TYPE)
        std::cout << dynamic_cast<Dog*>(metas[i])->getBrainIdea(50) << '\n';
      else if (metas[i]->getType() == CAT_TYPE)
        std::cout << dynamic_cast<Cat*>(metas[i])->getBrainIdea(50) << '\n';
      else
        std::cout << '\n';
    }
    std::cout << '\n';

    for (int i = 0; i < 4; ++i)
      delete metas[i];
    std::cout << '\n';
  }
  std::cout << "<Done testing array of Animal>\n";
  std::cout << std::endl;

  system("leaks a.out");
  return 0;
}
