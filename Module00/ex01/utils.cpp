/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:34:02 by mgo               #+#    #+#             */
/*   Updated: 2022/06/14 11:52:13 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string get_input_trimmed_ws()
{
	std::string	input;
	std::string	ws;
	size_t		last_not_ws;

	std::getline(std::cin >> std::ws, input);
	ws = " \n\r\t\f\v";
	last_not_ws = input.find_last_not_of(ws);
	return (input.substr(0, last_not_ws + 1));
}

std::string	set_str_lower(std::string str)
{
	for (std::string::iterator it = str.begin(); \
		it != str.end(); \
		++it)
		*it = static_cast<char>(std::tolower(static_cast<unsigned char>(*it)));
	return (str);
}

void	display_str_with_width(std::string str, size_t width)
{
	if (width == 0)
		return;
	else if (str.length() > width)
		std::cout << str.substr(0, width - 1) << ".";
	else
		std::cout << std::setw(width) << str;
}

void	display_border_line(char c)
{
	std::cout << std::setfill(c);
	std::cout << std::setw(46) << '\n';
	std::cout << std::setfill(' ');
}

bool	is_not_cin_stream_good(void)
{
	return (!(std::cin.good()));
}
