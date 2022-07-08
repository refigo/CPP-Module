/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 09:24:48 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 15:09:16 by mgo              ###   ########.fr       */
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
    for (int i = 0; i < IDEAS_MAX; ++i)
      std::cout << "Brain ideas[" << i << "]: " \
        << '<' << training_dog.getBrainIdea(i) << '>' << '\n';
    std::cout << '\n';
    std::cout << "ideas[" << 100 << "]: " \
        << '<' << training_dog.getBrainIdea(100) << '>' << '\n';
    std::cout << '\n';
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
    for (int i = 0; i < IDEAS_MAX; ++i)
      std::cout << "Brain ideas[" << i << "]: " \
        << '<' << training_cat.getBrainIdea(i) << '>' << '\n';
    std::cout << '\n';
    std::cout << "ideas[" << 100 << "]: " \
        << '<' << training_cat.getBrainIdea(-1) << '>' << '\n';
    std::cout << '\n';
  }
  std::cout << "<Done testing Cat having Brain>\n";

  //system("leaks a.out");
  return 0;
}
