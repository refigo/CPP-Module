/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:55:13 by mgo               #+#    #+#             */
/*   Updated: 2022/06/17 11:22:19 by mgo              ###   ########.fr       */
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

// considering to remove...
Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

Zombie*	zombieHorde(int N, std::string name);

#endif
