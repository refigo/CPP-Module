/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:39:46 by mgo               #+#    #+#             */
/*   Updated: 2022/07/20 17:02:26 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

#include <iostream>
#include <cctype>
#include <cmath>
#include <iomanip>

#define SCLR_IMPSSBL "impossible"
#define SCLR_NON_DSPLYBL "Non displayable"

class Scalar {
 public:
  Scalar(const std::string& rawstr);
  Scalar(const Scalar& orig);
  Scalar& operator=(const Scalar& rhs);
  ~Scalar(void);

  const std::string& getRawstr(void) const;
  double getValue(void) const;
  bool getErrorIs(void) const;

  char getValueAsChar(void) const;
  int getValueAsInt(void) const;
  float getValueAsFloat(void) const;
  double getValueAsDouble(void) const;

  void printValueAsChar(void) const;
  void printValueAsInt(void) const;
  void printValueAsFloat(void) const;
  void printValueAsDouble(void) const;
  void printAll(void) const;

 private:
  const std::string rawstr_;
  double value_;
  bool err_;

  Scalar(void);
};

std::ostream& operator<<(std::ostream& ostrm, const Scalar& sclr);

#endif
