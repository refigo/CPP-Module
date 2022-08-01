/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:42:07 by mgo               #+#    #+#             */
/*   Updated: 2022/08/01 10:19:52 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

std::ostream& operator<<(std::ostream& ostrm, const Data& data) {
  ostrm << "<Watching Data>\n" 
        << "\tname(string): " << data.name << '\n' 
        << "\tptr(address): " << &data << '\n';
  return (ostrm);
}

uintptr_t serialize(Data *ptr) {
  return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
  return (reinterpret_cast<Data*>(raw));
}
