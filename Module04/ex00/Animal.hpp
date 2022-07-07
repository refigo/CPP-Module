/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 09:41:16 by mgo               #+#    #+#             */
/*   Updated: 2022/07/07 13:36:16 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

# define ANML_TYPE "Animal"

class Animal
{
protected:
	std::string	type;

	Animal(const std::string& type_arg);

public:
	Animal(void);
	Animal(const Animal& origin);
	Animal&	operator=(const Animal& origin);
	virtual ~Animal(void);

	virtual void	makeSound(void) const;

	const std::string&	getType(void) const;
};

#endif
