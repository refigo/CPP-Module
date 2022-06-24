/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:55:13 by mgo               #+#    #+#             */
/*   Updated: 2022/06/24 09:49:10 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
private:
	std::string	name_;

public:
	void	announce(void) const;
	void	setName(const std::string& name);

	Zombie(void);
	Zombie(const std::string& name);
	~Zombie(void);
};

Zombie*	zombieHorde(int N, std::string name);

#endif
