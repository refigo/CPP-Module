/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:42:12 by mgo               #+#    #+#             */
/*   Updated: 2022/08/01 10:19:23 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <string>
#include <iostream>

typedef struct s_data {
  std::string name;
}              Data;

std::ostream& operator<<(std::ostream& ostrm, const Data& data);

uintptr_t serialize(Data *data);
Data* deserialize(uintptr_t raw);

#endif