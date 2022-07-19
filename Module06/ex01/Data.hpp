/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:42:12 by mgo               #+#    #+#             */
/*   Updated: 2022/07/19 15:32:06 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <string>
#include <iostream>

#define DATA_DFLT_NAME "data"

class Data {
 public:
  Data(const std::string& name);
  Data(void);
  Data(const Data& orig);
  Data& operator=(const Data& rhs);
  ~Data(void);

  const std::string& getName(void) const;
  const Data* getThisPtr(void) const;

 private:
  std::string name_;
};

std::ostream& operator<<(std::ostream& ostrm, const Data& data);

uintptr_t serialize(Data *data);
Data* deserialize(uintptr_t raw);

#endif