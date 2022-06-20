/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:05:21 by mgo               #+#    #+#             */
/*   Updated: 2022/06/20 13:09:55 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

enum e_harl
{
	HARL_DEBUG,
	HARL_INFO,
	HARL_WARNING,
	HARL_ERROR,
	HARL_UNKNOWN
};

class Harl
{
private:
	e_harl	status_;
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	void	set_status_(const std::string& level);

public:
	void	complain(std::string level);

	Harl(void);
	~Harl(void);
};

#endif