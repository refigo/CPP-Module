/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:41:42 by mgo               #+#    #+#             */
/*   Updated: 2022/07/19 15:34:16 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main(void)
{
  Data food("pizzaaa");
  uintptr_t uiptr;

  std::cout << food << '\n';
  
  uiptr = serialize(&food);
  std::cout << "uiptr of Data: [" << uiptr << "]\n";
  std::cout << "deserialized uiptr: [" << deserialize(uiptr) << "]\n";
  std::cout << *(deserialize(uiptr)) << '\n';

  std::cout << *(deserialize(serialize(&food)));
  return (0);
}
