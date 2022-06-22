/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 20:29:16 by mgo               #+#    #+#             */
/*   Updated: 2022/06/22 14:28:44 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					value_;
	static const int	num_frac_bits_ = 8;

public:
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	Fixed(void);
	Fixed(const int ival);
	Fixed(const float fval);
	Fixed(const Fixed& fixed);
	Fixed&	operator=(const Fixed& fixed);
	~Fixed(void);
};

std::ostream&	operator<<(std::ostream& ostream, const Fixed& fixed);

#endif