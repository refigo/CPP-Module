/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:13:55 by mgo               #+#    #+#             */
/*   Updated: 2022/06/20 15:14:23 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		std::cout << "Argument number is not valid!\n";
		std::cout << "Usage: ./harlFilter [ LEVEL ]\n";
		return (1);
	}
	else
		harl.complain(argv[1]);
	return (0);
}
