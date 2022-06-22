/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 10:35:55 by mgo               #+#    #+#             */
/*   Updated: 2022/06/22 17:06:20 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void)
	: raw_bits_(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int ival)
	: raw_bits_(ival << Fixed::num_frac_bits_)
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float fval)
	: raw_bits_(\
		static_cast<int>(\
			std::roundf(fval * (1 << Fixed::num_frac_bits_))))
{
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed& fxd)
{
	std::cout << "Copy constructor called\n";
	*this = fxd;
}

Fixed&	Fixed::operator=(const Fixed& fxd)
{
	std::cout << "Copy assignment constructor called\n";
	raw_bits_ = fxd.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) const
{
	return (raw_bits_);
}

void	Fixed::setRawBits(int const raw)
{
	raw_bits_ = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(raw_bits_) / (1 << Fixed::num_frac_bits_));
}

int	Fixed::toInt(void) const
{
	return (raw_bits_ >> Fixed::num_frac_bits_);
}

std::ostream&	operator<<(std::ostream& ostrm, const Fixed& fxd)
{
	return (ostrm << fxd.toFloat());
}
