/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:43:02 by mgo               #+#    #+#             */
/*   Updated: 2022/06/19 20:17:41 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

int	main(int argc, char **argv)
{
	Replacer	replacer(argc, argv);
	
	if (replacer.check_and_set_args() == false)
		return (1);
	if (replacer.setup_file_io() == false)
		return (1);
	replacer.replace();
	return (0);
}
