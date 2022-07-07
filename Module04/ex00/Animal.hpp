/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 09:41:16 by mgo               #+#    #+#             */
/*   Updated: 2022/07/07 09:53:39 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
protected:
	std::string	type;

public:
	Animal(void);
	Animal(const Animal& origin);
	Animal&	operator=(const Animal& origin);
	~Animal(void);

	virtual void	makeSound(void) const;

	std::string&	getType(void) const;
};

#endif
