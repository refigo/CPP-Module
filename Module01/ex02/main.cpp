/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 11:38:01 by mgo               #+#    #+#             */
/*   Updated: 2022/06/17 12:04:26 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string		brain("HI THIS IS BRAIN");
	std::string*	stringPTR(&brain);
	std::string&	stringREF(brain);

	std::cout << std::endl;

	// address
	std::cout << "Address of str: " << &brain << '\n';
	std::cout << "Address by PTR: " << stringPTR << '\n';
	std::cout << "Address by REF: " << &stringREF << '\n';

	std::cout << std::endl;
	
	// value
	std::cout << "Value of str: \t" << brain << '\n';
	std::cout << "Value by PTR: \t" << *stringPTR << '\n';
	std::cout << "Value by REF: \t" << stringREF << '\n';

	std::cout << std::endl;

	return (0);
}
