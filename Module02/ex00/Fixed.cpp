/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 14:23:34 by mgo               #+#    #+#             */
/*   Updated: 2022/06/22 16:45:24 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (raw_bits_);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	raw_bits_ = raw;
}

Fixed::Fixed(void)
	: raw_bits_(0)
{
	std::cout << "Default constructor called\n";
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
