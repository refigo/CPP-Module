/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:18:01 by mgo               #+#    #+#             */
/*   Updated: 2022/07/19 18:45:50 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

#include <cctype> // isspace()

Scalar::Scalar(const std::string& rawstr)
  : rawstr_(rawstr), 
    value_(0.0), 
    err_(false) {
  char* str_endp = NULL;
  value_ = std::strtod(rawstr_.c_str(), &str_endp);
  /*
  if (value_ == 0.0 && rawstr_[0] != '-' && rawstr_[0] != '+' 
    && !std::isdigit(rawstr_[0])) {
    std::cout << "shit...\n";
    err_ = true;
  }
  if (errno == ERANGE) {
    std::cout << "ERANGE...\n";
    err_ = true;
  }
  */
}

Scalar::Scalar(const Scalar& orig) {
  (void)orig;
}

Scalar& Scalar::operator=(const Scalar& rhs) {
  (void)rhs;
  return *this;
}

Scalar::~Scalar(void) {}


const std::string& Scalar::getRawstr(void) const {
  return rawstr_;
}

double Scalar::getValue(void) const {
  return value_;
}

bool Scalar::getErrorIs(void) const {
  return err_;
}

char Scalar::getValueAsChar(void) const {
  return (static_cast<char>(value_));
}

int Scalar::getValueAsInt(void) const {
  return (static_cast<int>(value_));
}

float Scalar::getValueAsFloat(void) const {
  return (static_cast<float>(value_));
}

double Scalar::getValueAsDouble(void) const {
  return (static_cast<double>(value_));
}

void Scalar::printValueAsChar(void) const {
  char as_char = getValueAsChar();
  
  std::cout << "char: ";
  if (err_ == true)
    std::cout << SCLR_IMPSSBL << '\n';
  else if (std::isprint(as_char))
    std::cout << '\'' << as_char << '\'' << '\n';
  else
    std::cout << SCLR_NON_DSPLYBL << '\n';
}

void Scalar::printValueAsInt(void) const {

}

void Scalar::printValueAsFloat(void) const {

}

void Scalar::printValueAsDouble(void) const {

}

Scalar::Scalar(void) {}

std::ostream& operator<<(std::ostream& ostrm, const Scalar& sclr) {
  ostrm << "<Sclar>\n"
        << "\trawstr_: [" << sclr.getRawstr() << "]\n"
        << "\tvalue_: [" << sclr.getValue() << "]\n"
        << "\tis_error_: [" << sclr.getErrorIs() << "]\n";
  ostrm << std::endl;
  ostrm << "\tchar: [" << sclr.getValueAsChar() << "]\n"
        << "\tint: [" << sclr.getValueAsInt() << "]\n"
        << "\tfloat: [" << sclr.getValueAsFloat() << "]\n"
        << "\tdouble: [" << sclr.getValueAsDouble() << "]\n";
  sclr.printValueAsChar();
  return ostrm;
}
