/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:08:53 by mgo               #+#    #+#             */
/*   Updated: 2022/06/17 13:58:53 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
private:
	std::string	name_;
	Weapon& weapon_;

	HumanA(void);

public:
	void attack(void) const;

	HumanA(const std::string& name, Weapon& weapon);
	~HumanA(void);
};

#endif
