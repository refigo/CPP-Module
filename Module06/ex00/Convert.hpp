/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:39:46 by mgo               #+#    #+#             */
/*   Updated: 2022/07/18 09:41:31 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>

class Convert {
 public:
  Convert(const Convert& orig);
  Convert& operator=(const Convert& rhs);
  ~Convert(void);

 private:
  Convert(void);
};

#endif
