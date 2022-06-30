/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 10:35:55 by mgo               #+#    #+#             */
/*   Updated: 2022/06/30 09:58:13 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void)
	: raw_bits_(0) {}

Fixed::Fixed(const int ival)
	: raw_bits_(ival * (1 << Fixed::num_frac_bits_)) {}

Fixed::Fixed(const float fval)
	: raw_bits_(\
		static_cast<int>(\
			std::roundf(fval * (1 << Fixed::num_frac_bits_)))) {}

Fixed::Fixed(const Fixed& fxd) {
	*this = fxd;
}

Fixed&	Fixed::operator=(const Fixed& fxd) {
	raw_bits_ = fxd.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) {}

int	Fixed::getRawBits(void) const {
	return (raw_bits_);
}

void	Fixed::setRawBits(int const raw) {
	raw_bits_ = raw;
}

float	Fixed::toFloat(void) const {
	return (static_cast<float>(raw_bits_) / (1 << Fixed::num_frac_bits_));
}

int	Fixed::toInt(void) const {
	return (raw_bits_ / (1 << Fixed::num_frac_bits_));
}

Fixed&	Fixed::operator++(void) {
	++raw_bits_;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	ret(*this);

	++raw_bits_;
	return (ret);
}

Fixed&	Fixed::operator--(void) {
	--raw_bits_;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	ret(*this);

	--raw_bits_;
	return (ret);
}

Fixed&	Fixed::min(Fixed& fxd_a, Fixed& fxd_b) {
	return ((fxd_a < fxd_b) ? fxd_a : fxd_b);
}

const Fixed&	Fixed::min(const Fixed& fxd_a, const Fixed& fxd_b) {
	return ((fxd_a < fxd_b) ? fxd_a : fxd_b);
}

Fixed&	Fixed::max(Fixed& fxd_a, Fixed& fxd_b) {
	return ((fxd_a > fxd_b) ? fxd_a : fxd_b);
}

const Fixed&	Fixed::max(const Fixed& fxd_a, const Fixed& fxd_b) {
	return ((fxd_a > fxd_b) ? fxd_a : fxd_b);
}

bool	operator>(const Fixed& lfxd, const Fixed& rfxd) {
	return (lfxd.getRawBits() > rfxd.getRawBits());
}

bool	operator<(const Fixed& lfxd, const Fixed& rfxd) {
	return (lfxd.getRawBits() < rfxd.getRawBits());
}

bool	operator>=(const Fixed& lfxd, const Fixed& rfxd) {
	return (lfxd.getRawBits() >= rfxd.getRawBits());
}

bool	operator<=(const Fixed& lfxd, const Fixed& rfxd) {
	return (lfxd.getRawBits() <= rfxd.getRawBits());
}

bool	operator==(const Fixed& lfxd, const Fixed& rfxd) {
	return (lfxd.getRawBits() == rfxd.getRawBits());
}

bool	operator!=(const Fixed& lfxd, const Fixed& rfxd) {
	return (lfxd.getRawBits() != rfxd.getRawBits());
}

Fixed	operator+(const Fixed& lfxd, const Fixed& rfxd) {
	Fixed	ret(lfxd.toFloat() + rfxd.toFloat());

	return (ret);
}

Fixed	operator-(const Fixed& lfxd, const Fixed& rfxd) {
	Fixed	ret(lfxd.toFloat() - rfxd.toFloat());

	return (ret);
}

Fixed	operator*(const Fixed& lfxd, const Fixed& rfxd) {
	Fixed	ret(lfxd.toFloat() * rfxd.toFloat());

	return (ret);
}

Fixed	operator/(const Fixed& lfxd, const Fixed& rfxd) {
	Fixed	ret(lfxd.toFloat() / rfxd.toFloat());

	return (ret);
}

std::ostream&	operator<<(std::ostream& ostrm, const Fixed& fxd) {
	return (ostrm << fxd.toFloat());
}
