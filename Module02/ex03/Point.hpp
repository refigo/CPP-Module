/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:23:53 by mgo               #+#    #+#             */
/*   Updated: 2022/06/24 11:22:56 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	Fixed const	x_;
	Fixed const	y_;

public:
	Point(void);
	Point(const float xflt, const float yflt);
	Point(const Point& pnt);
	Point&	operator=(const Point& pnt);
	~Point(void);

	const Fixed&	getX(void) const;
	const Fixed&	getY(void) const;
};

Point	operator-(const Point& lpnt, const Point& rpnt);

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif