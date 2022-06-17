/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:43:02 by mgo               #+#    #+#             */
/*   Updated: 2022/06/17 21:14:44 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

#include <iostream>
static void	test_place(void)
{
	//out file stream
	/*
	std::ofstream	outf("test.txt");

	if (!outf)
	{
		std::cout << "outf failed\n";
		return ;
	}

	outf << "test1\n";
	outf << "test2\n";
	*/

	//in file stream
	std::ifstream	inf("test.txt");

	if (!inf)
	{
		std::cout << "inf failed\n";
		return ;
	}
	
	while (inf)
	{
		std::string	strInput;
		//inf >> strInput;
		std::getline(inf, strInput);
		std::cout << strInput << '\n';
	}
	
	return ;
}

int	main(int argc, char **argv)
{
	test_place();

	(void)argc;
	(void)argv;
	return (0);
}
