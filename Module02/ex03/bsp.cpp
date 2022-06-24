/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:24:04 by mgo               #+#    #+#             */
/*   Updated: 2022/06/24 11:23:35 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	outer_product(const Point& vec1, const Point& vec2)
{
	return (vec1.getX() * vec2.getY() - vec2.getX() * vec2.getY());
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Point	vec_ab(b - a);
	Point	vec_ap(point - a);
	Point	vec_bc(c - b);
	Point	vec_bp(point - b);
	Point	vec_ca(a - c);
	Point	vec_cp(point - c);

	if ((outer_product(vec_ab, vec_ap) > 0) \
		&& (outer_product(vec_bc, vec_bp) > 0) \
		&& (outer_product(vec_ca, vec_cp) > 0))
		return (true);
	else if ((outer_product(vec_ab, vec_ap) < 0) \
		&& (outer_product(vec_bc, vec_bp) < 0) \
		&& (outer_product(vec_ca, vec_cp) < 0))
		return (true);
	else
		return (false);
}
