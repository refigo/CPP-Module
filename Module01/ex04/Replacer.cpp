/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:17:03 by mgo               #+#    #+#             */
/*   Updated: 2022/06/19 19:26:33 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"
#include <iostream>
#include <sstream>

bool	Replacer::check_and_set_args(void)
{
	if (argc_ != 4)
	{
		std::cout << "args num failed!\n";
		return (false);
	}
	
	// todo: error handlings
	filename_ = argv_[1];
	s1_ = argv_[2];
	s2_ = argv_[3];
	return (true);
}

void	Replacer::setup(void)
{
	// todo: error handling
	infile_.open(filename_);

	// todo: error handling
	outfile_.open(filename_ + ".replace");

}

void	Replacer::replace(void)
{
	std::ostringstream	ss;
	

}

Replacer::Replacer(int argc, char **argv)
	: argc_(argc), argv_(argv)
{
}

Replacer::~Replacer(void)
{
	if (infile_.is_open())
		infile_.close();
	if (outfile_.is_open())
		outfile_.close();
}
