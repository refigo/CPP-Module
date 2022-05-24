/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 21:09:23 by mgo               #+#    #+#             */
/*   Updated: 2022/05/24 21:29:29 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static char *set_to_upper(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (('a' <= str[i]) && (str[i] <= 'z'))
			str[i] -= 32;
	}
	return (str);
}

static void use_megaphone(int argc, char **argv)
{
	int i;

	i = 0;
	while (++i < argc)
	{
		std::cout << set_to_upper(argv[i]);
	}
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		use_megaphone(argc, argv);
	return (0);
}