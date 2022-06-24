/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:08:53 by mgo               #+#    #+#             */
/*   Updated: 2022/06/24 10:15:07 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	const std::string	name_;
	const Weapon*		weapon_;

	HumanA(void);

public:
	void	attack(void) const;

	HumanA(const std::string& name, const Weapon& weapon);
	~HumanA(void);
};

#endif
