/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:55:13 by mgo               #+#    #+#             */
/*   Updated: 2022/06/17 10:05:02 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
private:
	std::string	name_;

	Zombie(void);

public:
	void	announce(void) const;

	Zombie(const std::string& name);
	~Zombie(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
