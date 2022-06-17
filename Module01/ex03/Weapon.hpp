/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:03:01 by mgo               #+#    #+#             */
/*   Updated: 2022/06/17 14:48:53 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
private:
	std::string type_;

	Weapon(void);

public:
	const std::string& getType(void) const;
	void setType(const std::string& type);
	
	Weapon(const std::string& type);
	~Weapon(void);
};

#endif
