/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:24:01 by mgo               #+#    #+#             */
/*   Updated: 2022/06/28 19:37:32 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

static void	setTriangle(t_triangle& tri, \
	const Point& vrxA, const Point& vrxB, const Point& vrxC) {
	tri.a = vrxA;
	tri.b = vrxB;
	tri.c = vrxC;
}

static void	displayIsPointIn(const t_triangle& tri, \
								const Point& point) {
	std::cout << "Triangle: " << tri.a << ' ' \
		<< tri.b << ' ' << tri.c << '\n';
	std::cout << "Point: " << point << '\n';
	std::cout << "Result: " << bsp(tri.a, tri.b, tri.c, point) << "\n\n";
}

static void	test_at_edge(t_triangle &tri) {
	Fixed	fxdX(0.5f);
	Fixed	fxdY(0.5f);
	Point	pnt(fxdX.toFloat(), fxdY.toFloat());

	displayIsPointIn(tri, pnt);

	--fxdX;
	pnt = Point(fxdX.toFloat(), fxdY.toFloat());
	displayIsPointIn(tri, pnt);

	++fxdX;
	++fxdX;
	pnt = Point(fxdX.toFloat(), fxdY.toFloat());
	displayIsPointIn(tri, pnt);
}

int	main(void) {
	t_triangle	tri;

	setTriangle(tri, Point(0.0f, 0.0f), Point(0.0f, 1.0f), Point(1.0f, 0.0f));
	std::cout.setf(std::ios::boolalpha);
	std::cout << '\n';
	displayIsPointIn(tri, Point(0.25f, 0.25f));
	test_at_edge(tri);
	displayIsPointIn(tri, Point(0.0f, 0.0f));
	displayIsPointIn(tri, Point(0.3f, 0.1f));
	return (0);
}
