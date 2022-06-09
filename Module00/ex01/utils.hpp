/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:34:05 by mgo               #+#    #+#             */
/*   Updated: 2022/06/09 11:05:59 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include <iostream>
#include <iomanip>
#include <string>

#define B_WHITE "\033[1;37m"
#define END_OF_COLOR "\033[0;0m"

// considering to remove...
enum e_bool
{
	FALSE,
	TRUE
};

// considering to remove...
enum e_result
{
	FAIL,
	SUCCESS
};

std::string get_input_trimmed_ws(void);

#endif
