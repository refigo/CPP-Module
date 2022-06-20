/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:05:16 by mgo               #+#    #+#             */
/*   Updated: 2022/06/20 14:56:53 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void	Harl::set_status_(const std::string& level)
{
	if (level == "DEBUG")
		status_ = HARL_DEBUG;
	else if (level == "INFO")
		status_ = HARL_INFO;
	else if (level == "WARNING")
		status_ = HARL_WARNING;
	else if (level == "ERROR")
		status_ = HARL_ERROR;
	else
		status_ = HARL_UNKNOWN;
}

void	Harl::complain(std::string level)
{
	set_status_(level);
	switch (status_)
	{
		case HARL_DEBUG:
			std::cout << "[ DEBUG ]\n";
			std::cout << "I love having extra bacon for my " \
				"7XL-double-cheese-triple-pickle-special-ketchup burger.\n" \
				"I really do!\n\n";
		case HARL_INFO:
			std::cout << "[ INFO ]\n";
			std::cout << "I cannot believe adding extra bacon costs more money.\n" \
				"You didn’t put enough bacon in my burger!\n" \
				"If you did, I wouldn’t be asking for more!\n\n";
		case HARL_WARNING:
			std::cout << "[ WARNING ]\n";
			std::cout << "I think I deserve to have some extra bacon for free.\n" \
				"I’ve been coming for years " \
				"whereas you started working here since last month.\n\n";
		case HARL_ERROR:
			std::cout << "[ ERROR ]\n";
			std::cout << "This is unacceptable, " \
				"I want to speak to the manager now.\n\n";
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}

void	Harl::debug(void)
{
	
}

void	Harl::info(void)
{
	
}

void	Harl::warning(void)
{
	
}

void	Harl::error(void)
{
	
}

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}
