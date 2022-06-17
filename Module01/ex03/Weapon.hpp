/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:03:01 by mgo               #+#    #+#             */
/*   Updated: 2022/06/17 13:58:56 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
private:
	std::string type_;

public:
	const std::string& getType(void) const;
	void setType(const std::string& type);

	Weapon(void);
	Weapon(const std::string& type);
	~Weapon(void);
};

#endif
