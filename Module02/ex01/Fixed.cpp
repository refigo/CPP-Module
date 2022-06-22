/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 10:35:55 by mgo               #+#    #+#             */
/*   Updated: 2022/06/22 15:35:57 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

int	Fixed::getRawBits(void) const
{
	return (value_);
}

void	Fixed::setRawBits(int const raw)
{
	value_ = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(value_) / (1 << Fixed::num_frac_bits_));

	/*
	return static_cast<float>(value_) / (1 << Fixed::num_frac_bits_);
	*/
	/*
	return static_cast<float>(value_) / (1 << Fixed::num_frac_bits_);
	*/
}

int	Fixed::toInt(void) const
{
	return (value_ >> Fixed::num_frac_bits_);

	/*
	return value_ >> Fixed::num_frac_bits_;
	*/
	/*
	return value_ / (1 << Fixed::num_frac_bits_);
	*/
}

Fixed::Fixed(void)
	: value_(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int ival)
	: value_(ival * (1 << Fixed::num_frac_bits_))
{
	std::cout << "Int constructor called\n";

	/*
	value_ = ival << Fixed::num_frac_bits_;
	*/
	/*
	value_ = ival * (1 << Fixed::num_frac_bits_);
	*/
}

Fixed::Fixed(const float fval)
	: value_(\
		static_cast<int>(\
			std::roundf(fval * (1 << Fixed::num_frac_bits_))))
{
	std::cout << "Float constructor called\n";

	/*
	value_ = static_cast<int>(std::roundf(v * (1 << Fixed::num_frac_bits_)));
	*/
	/*
	value_ = std::roundf(fval * (1 << Fixed::num_frac_bits_));
	*/
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed&	Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment constructor called\n";
	value_ = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

std::ostream&	operator<<(std::ostream& ostream, const Fixed& fixed)
{
	return (ostream << fixed.toFloat());

	/*
	return ostream << fixed.toFloat();
	*/
	/*
	ostream << fixed.toFloat();
	return ostream;
	*/
}
