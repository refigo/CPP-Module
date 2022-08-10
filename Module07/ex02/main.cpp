/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:50:26 by mgo               #+#    #+#             */
/*   Updated: 2022/08/10 13:00:13 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>

void testPlace(void) {
  std::cout << std::endl;

  // testing Array<int>
  std::cout << "----- Start testing Array<int> -----\n";
  {
    Array<int> testing_dflt;
    std::cout << "Default constructor size: [" << testing_dflt.size() << "]\n";
    try {
      testing_dflt[0] = 0;
    } catch (std::exception& e) {
      std::cout << e.what() << '\n';
    }

    std::cout << std::endl;

    Array<int> testing_ui(7);
    for (unsigned int i = 0; i < testing_ui.size(); ++i) {
      testing_ui[i] = i;
    }
    testing_ui.printElems();
    testing_dflt = testing_ui;
    testing_dflt.printElems();
    testing_dflt[testing_dflt.size() - 1] = 7;
    testing_ui.printElems();
    testing_dflt.printElems();

    std::cout << std::endl;

    const Array<int> testing_cpy(testing_ui);
    testing_ui.printElems();
    testing_cpy.printElems();
    testing_ui[testing_ui.size() - 1] = 8;
    testing_ui.printElems();
    testing_cpy.printElems();
    std::cout << "const operator[last_index] -> " 
              << testing_cpy[testing_cpy.size() - 1] << '\n';
    
    try {
      testing_ui[testing_ui.size()] = 1;
      testing_ui.printElems();
    } catch (std::exception& e) {
      std::cout << e.what() << '\n';
    }
  }
  std::cout << "----- Done testing Array<int> -----\n";

  std::cout << std::endl;

  // testing Array<double>
  std::cout << "----- Start testing Array<double> -----\n";
  {
    Array<double> testing_dflt;
    std::cout << "Default constructor size: [" << testing_dflt.size() << "]\n";
    try {
      testing_dflt[0] = 0.1;
    } catch (std::exception& e) {
      std::cout << e.what() << '\n';
    }

    std::cout << std::endl;

    Array<double> testing_ui(7);
    for (unsigned int i = 0; i < testing_ui.size(); ++i) {
      testing_ui[i] = ((double)i + 0.1);
    }
    testing_dflt = testing_ui;
    testing_ui.printElems();
    testing_dflt.printElems();
    testing_dflt[testing_dflt.size() - 1] = 7.8;
    testing_ui.printElems();
    testing_dflt.printElems();

    std::cout << std::endl;

    const Array<double> testing_cpy(testing_ui);
    testing_ui.printElems();
    testing_cpy.printElems();
    testing_ui[testing_ui.size() - 1] = 8.9;
    testing_ui.printElems();
    testing_cpy.printElems();
    std::cout << "const operator[last_index] -> " 
              << testing_cpy[testing_cpy.size() - 1] << '\n';
    
    try {
      testing_ui[testing_ui.size()] = 1.2;
      testing_ui.printElems();
    } catch (std::exception& e) {
      std::cout << e.what() << '\n';
    }
  }
  std::cout << "----- Done testing Array<double> -----\n";

  std::cout << std::endl;

  // testing Array<std::string>
  std::cout << "----- Start testing Array<std::string> -----\n";
  {
    Array<std::string> testing_dflt;
    std::cout << "Default constructor size: [" << testing_dflt.size() << "]\n";
    try {
      testing_dflt[0] = "Hello!";
    } catch (std::exception& e) {
      std::cout << e.what() << '\n';
    }

    std::cout << std::endl;

    Array<std::string> testing_ui(3);
    testing_ui[0] = "Hello";
    testing_ui[1] = "CPP";
    testing_ui[2] = "Module07";
    testing_dflt = testing_ui;
    testing_ui.printElems();
    testing_dflt.printElems();
    testing_dflt[testing_dflt.size() - 1] = "Module06";
    testing_ui.printElems();
    testing_dflt.printElems();

    std::cout << std::endl;

    const Array<std::string> testing_cpy(testing_ui);
    testing_ui.printElems();
    testing_cpy.printElems();
    testing_ui[testing_ui.size() - 1] = "Module08";
    testing_ui.printElems();
    testing_cpy.printElems();
    std::cout << "const operator[last_index] -> " 
              << testing_cpy[testing_cpy.size() - 1] << '\n';
    
    try {
      testing_ui[testing_ui.size()] = "ft_containers";
      testing_ui.printElems();
    } catch (std::exception& e) {
      std::cout << e.what() << '\n';
    }
  }
  std::cout << "----- Done testing Array<std::string> -----\n";

  std::cout << std::endl;
}

int main(void) {
  testPlace();
  system("leaks a.out");
  return 0;
}

/*
#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
  Array<int> numbers(MAX_VAL);
  int* mirror = new int[MAX_VAL];
  srand(time(NULL));
  for (int i = 0; i < MAX_VAL; i++)
  {
    const int value = rand();
    numbers[i] = value;
    mirror[i] = value;
  }
  //SCOPE
  {
    Array<int> tmp = numbers;
    Array<int> test(tmp);
  }

  for (int i = 0; i < MAX_VAL; i++)
  {
    if (mirror[i] != numbers[i])
    {
      std::cerr << "didn't save the same value!!" << std::endl;
      return 1;
    }
  }
  try
  {
    numbers[-2] = 0;
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    numbers[MAX_VAL] = 0;
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }

  for (int i = 0; i < MAX_VAL; i++)
  {
    numbers[i] = rand();
  }
  delete [] mirror;//
  return 0;
}
*/
