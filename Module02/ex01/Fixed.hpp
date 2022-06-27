/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 20:29:16 by mgo               #+#    #+#             */
/*   Updated: 2022/06/27 16:08:10 by mgo              ###   ########.fr       */
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
};

std::ostream&	operator<<(std::ostream& ostrm, const Fixed& fxd);

#endif