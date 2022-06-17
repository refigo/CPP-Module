/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:15:32 by mgo               #+#    #+#             */
/*   Updated: 2022/06/17 18:36:07 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	const std::string	name_;
	const Weapon*		weapon_;

	HumanB(void);

public:
	void	attack(void) const;
	void	setWeapon(const Weapon& weapon);

	HumanB(const std::string& name);
	~HumanB(void);
};

#endif
