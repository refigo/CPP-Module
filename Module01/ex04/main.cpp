/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:43:02 by mgo               #+#    #+#             */
/*   Updated: 2022/06/19 19:25:43 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

int	main(int argc, char **argv)
{
	Replacer	replacer(argc, argv);
	
	if (!replacer.check_and_set_args())
		return (1);
	
	//replacer.setup();	
	//replacer.replace();

	//test_place();
	return (0);
}
