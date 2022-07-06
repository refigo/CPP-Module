/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:25:39 by mgo               #+#    #+#             */
/*   Updated: 2022/07/06 09:55:24 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# define CLR_SKYBLUE "\033[0;36m"

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"

# define DIATR_DFLT_NM "anonymousDIATR"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	name_;

	void	displayHdrMsg_(void) const;

public:
	DiamondTrap(void);
	DiamondTrap(const std::string& name);
	DiamondTrap(const DiamondTrap& diatr);
	DiamondTrap&	operator=(const DiamondTrap& diatr);
	~DiamondTrap(void);

	const std::string&	getName(void) const;

	void	attack(const std::string& target);

	void	whoAmI();
};

#endif