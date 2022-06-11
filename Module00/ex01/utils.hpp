/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:34:05 by mgo               #+#    #+#             */
/*   Updated: 2022/06/11 13:16:05 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include <iostream>
#include <iomanip>
#include <string>

#define B_WHITE "\033[1;37m"
#define END_OF_COLOR "\033[0;0m"

std::string get_input_trimmed_ws(void);
void		display_str_with_width(std::string str, size_t width);
void		display_border_line(char c);

inline bool	is_not_cin_stream_good(void) { return (!(std::cin.good())); }

#endif
