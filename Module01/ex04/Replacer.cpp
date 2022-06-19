/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:17:03 by mgo               #+#    #+#             */
/*   Updated: 2022/06/19 20:03:03 by mgo              ###   ########.fr       */
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
		std::cout << "Usage: ./replacer <filename> <from> <to>\n";
		return (false);
	}
	filename_ = argv_[1];
	if (filename_.empty())
	{
		std::cout << "filename is empty!\n";
		return (false);
	}
	str_from_ = argv_[2];
	if (str_from_.empty())
	{
		std::cout << "from_string is empty!\n";
		return (false);
	}
	str_to_ = argv_[3];
	if (str_to_.empty())
	{
		std::cout << "to_string is empty!\n";
		return (false);
	}
	return (true);
}

bool	Replacer::setup_file_io(void)
{
	infile_.open(filename_);
	if (infile_.good() == false)
	{
		std::cout << "infile open failed!\n";
		return (false);
	}
	else
		std::cout << "hello open infile!\n";
	outfile_.open(filename_ + ".replace");
	if (outfile_.good() == false)
	{
		std::cout << "outfile open failed!\n";
		return (false);
	}
	else
		std::cout << "hello open outfile!\n";
	return (true);
}

void	Replacer::replace(void)
{
	std::ostringstream	ss;
	
	ss << infile_.rdbuf();
	std::string	contents(ss.str());
	infile_.close();

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
