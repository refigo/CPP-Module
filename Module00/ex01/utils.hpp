/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:34:05 by mgo               #+#    #+#             */
/*   Updated: 2022/06/14 11:52:20 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <iomanip>
# include <string>

# define B_RED "\033[1;31m"
# define B_YELLOW "\033[1;33m"
# define B_GREEN "\033[1;32m"
# define B_BLUE "\033[1;34m"
# define B_PURPLE "\033[1;35m"
# define B_WHITE "\033[1;37m"
# define END_OF_COLOR "\033[0;0m"

std::string get_input_trimmed_ws(void);
std::string	set_str_lower(std::string str);
void		display_str_with_width(std::string str, size_t width);
void		display_border_line(char c);
bool		is_not_cin_stream_good(void);

#endif
