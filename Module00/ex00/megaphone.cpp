/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 21:09:23 by mgo               #+#    #+#             */
/*   Updated: 2022/06/14 11:41:17 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

static char *set_str_upper(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		str[i] = static_cast<char>(std::toupper(static_cast<unsigned char>(str[i])));
	return (str);
}

static void use_megaphone(int argc, char **argv)
{
	int i;

	i = 0;
	while (++i < argc)
		std::cout << set_str_upper(argv[i]);
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		use_megaphone(argc, argv);
	return (0);
}
