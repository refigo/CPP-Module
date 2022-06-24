/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:24:01 by mgo               #+#    #+#             */
/*   Updated: 2022/06/24 16:11:23 by mgo              ###   ########.fr       */
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

int	main(void) {
	t_triangle	tri;

	setTriangle(tri, Point(0.0f, 0.0f), Point(0.0f, 1.0f), Point(1.0f, 0.0f));
	std::cout.setf(std::ios::boolalpha);
	std::cout << '\n';
	displayIsPointIn(tri, Point(0.25f, 0.25f));
	displayIsPointIn(tri, Point(0.5f, 0.5f));
	displayIsPointIn(tri, Point(0.0f, 0.0f));
	displayIsPointIn(tri, Point(0.3f, 0.1f));
	return (0);
}
