/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:05:16 by mgo               #+#    #+#             */
/*   Updated: 2022/06/20 14:45:57 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain(std::string level)
{
	const char	*levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*func[4])(void) = {	&Harl::debug, 
										&Harl::info, 
										&Harl::warning, 
										&Harl::error };
	for (int i = 0; i < 4; ++i)
	{
		if (level == levels[i])
			(this->*(func[i]))();
	}
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my " \
		"7XL-double-cheese-triple-pickle-special-ketchup burger.\n" \
		"I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money.\n" \
		"You didn’t put enough bacon in my burger!\n" \
		"If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\n" \
		"I’ve been coming for years " \
		"whereas you started working here since last month.\n";
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable!\n" \
		"I want to speak to the manager now.\n";
}

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}
