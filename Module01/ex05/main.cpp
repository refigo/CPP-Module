/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:05:12 by mgo               #+#    #+#             */
/*   Updated: 2022/06/20 14:38:01 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	harl.complain("DEBUG");

	std::cout << std::endl;
	
	harl.complain("INFO");

	std::cout << std::endl;
	
	harl.complain("WARNING");

	std::cout << std::endl;

	harl.complain("ERROR");

	return (0);
}