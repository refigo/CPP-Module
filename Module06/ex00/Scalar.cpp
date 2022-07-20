/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:18:01 by mgo               #+#    #+#             */
/*   Updated: 2022/07/20 13:24:30 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

#include <cctype>   // isspace()
#include <cmath>    // isnan(), isinf()
#include <iomanip>  // setprecision()

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
  */
  if (errno == ERANGE) {
    std::cout << "ERANGE...\n";
    err_ = true;
  }
  
}

// todo
Scalar::Scalar(const Scalar& orig) {
  (void)orig;
}

// todo
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
  char aschar = getValueAsChar();
  
  std::cout << "char: ";
  if (err_ == true || std::isnan(value_)) { // is err_ necessary?
    std::cout << SCLR_IMPSSBL << '\n';
  } else if (std::isprint(aschar)) {
    std::cout << '\'' << aschar << '\'' << '\n';
  } else {
    std::cout << SCLR_NON_DSPLYBL << '\n';
  }
}

void Scalar::printValueAsInt(void) const {
  int asint = getValueAsInt();

  std::cout << "int: ";
  if (std::isnan(value_) || std::isinf(getValueAsFloat())) {
    std::cout << SCLR_IMPSSBL << '\n';
  } else if ((asint == INT_MIN) 
          && (roundf(getValueAsFloat()) != static_cast<float>(asint))) {
    std::cout << SCLR_IMPSSBL << '\n';
  } else {
    std::cout << asint << '\n';
  }
}

void Scalar::printValueAsFloat(void) const {
  float asfloat = getValueAsFloat();

  std::cout << "float: ";
  if (std::isinf(asfloat)) {
    std::cout << std::showpos << asfloat << std::noshowpos;
  } else {
    if (asfloat == static_cast<int64_t>(asfloat)) {
      std::cout << std::fixed;
      std::cout << std::setprecision(1);
    }
    std::cout << asfloat;
    std::cout << std::scientific;
    std::cout << std::setprecision(6);
  }
  std::cout << "f\n";
}

void Scalar::printValueAsDouble(void) const {
  double asdouble = getValueAsFloat();

  std::cout << "double: ";
  if (std::isinf(asdouble)) {
    std::cout << std::showpos << asdouble << std::noshowpos;
  } else {
    if (asdouble == static_cast<int64_t>(asdouble)) {
      std::cout << std::fixed;
      std::cout << std::setprecision(1);
    }
    std::cout << asdouble;
    std::cout << std::scientific;
    std::cout << std::setprecision(6);
  }
  std::cout << '\n';
}

void Scalar::printAll(void) const {
  printValueAsChar();
  printValueAsInt();
  printValueAsFloat();
  printValueAsDouble();
}

Scalar::Scalar(void) {}

std::ostream& operator<<(std::ostream& ostrm, const Scalar& sclr) {
  ostrm << "<Sclar>\n"
        << "\trawstr_: [" << sclr.getRawstr() << "]\n"
        << "\tvalue_: [" << sclr.getValue() << "]\n"
        << "\tis_error_: [" << sclr.getErrorIs() << "]\n";
  ostrm << std::endl;
  ostrm << "\tchar: [" << static_cast<int>(sclr.getValueAsChar()) << "]\n"
        << "\tint: [" << sclr.getValueAsInt() << "]\n"
        << "\tfloat: [" << sclr.getValueAsFloat() << "]\n"
        << "\tdouble: [" << sclr.getValueAsDouble() << "]\n";
  ostrm << std::endl;
  sclr.printAll();
  return ostrm;
}
