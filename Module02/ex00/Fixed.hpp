/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 14:23:32 by mgo               #+#    #+#             */
/*   Updated: 2022/06/22 17:05:31 by mgo              ###   ########.fr       */
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
	Fixed(const Fixed& fxd);
	Fixed&	operator=(const Fixed& fxd);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif