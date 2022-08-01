/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:41:42 by mgo               #+#    #+#             */
/*   Updated: 2022/08/01 10:26:34 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

static void set_data_pizzaaa(Data** data) {
  *data = new Data;
  (*data)->name = "pizzaaa";
}

int	main(void)
{
  Data* food;
  uintptr_t uiptr;

  set_data_pizzaaa(&food);
  std::cout << *food << '\n';
  uiptr = serialize(food);
  std::cout << "uiptr of Data: [" << uiptr << "]\n";
  std::cout << "deserialized uiptr: [" << deserialize(uiptr) << "]\n";
  std::cout << *(deserialize(uiptr)) << '\n';
  std::cout << *(deserialize(serialize(food)));
  return (0);
}
