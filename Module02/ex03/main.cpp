/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:24:01 by mgo               #+#    #+#             */
/*   Updated: 2022/06/24 11:23:05 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int	main(void)
{
	std::cout.setf(std::ios::boolalpha);
	std::cout << bsp(Point(0.0f, 0.0f), Point(0.0f, 1.0f), Point(1.0f, 0.0f),
							Point(0.2f, 0.2f))
				<< std::endl;
	std::cout << bsp(Point(0.0f, 0.0f), Point(0.0f, 1.0f), Point(1.0f, 0.0f),
							Point(0.0f, 0.0f))
				<< std::endl;
	std::cout << bsp(Point(0.0f, 0.0f), Point(0.0f, 1.0f), Point(1.0f, 0.0f),
							Point(0.3f, 0.1f))
				<< std::endl;
	return (0);
}
