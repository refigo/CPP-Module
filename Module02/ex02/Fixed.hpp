/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 20:29:16 by mgo               #+#    #+#             */
/*   Updated: 2022/06/22 17:55:18 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					raw_bits_;
	static const int	num_frac_bits_ = 8;

public:
	Fixed(void);
	Fixed(const int ival);
	Fixed(const float fval);
	Fixed(const Fixed& fxd);
	Fixed&	operator=(const Fixed& fxd);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	bool	operator>(const Fixed& fxd) const;
	bool	operator<(const Fixed& fxd) const;
	bool	operator>=(const Fixed& fxd) const;
	bool	operator<=(const Fixed& fxd) const;
	bool	operator==(const Fixed& fxd) const;
	bool	operator!=(const Fixed& fxd) const;

	Fixed	operator+(const Fixed& fxd) const;
	Fixed	operator-(const Fixed& fxd) const;
	Fixed	operator*(const Fixed& fxd) const;
	Fixed	operator/(const Fixed& fxd) const;

	Fixed&	operator++(void);
	Fixed	operator++(int); // int
	Fixed&	operator--(void);
	Fixed	operator--(int); // int

	static Fixed&		min(Fixed& fxd_a, Fixed& fxd_b);
	static const Fixed&	min(const Fixed& fxd_a, const Fixed& fxd_b);
	static Fixed&		max(Fixed& fxd_a, Fixed& fxd_b);
	static const Fixed&	max(const Fixed& fxd_a, const Fixed& fxd_b);
};

std::ostream&	operator<<(std::ostream& ostrm, const Fixed& fxd);

#endif