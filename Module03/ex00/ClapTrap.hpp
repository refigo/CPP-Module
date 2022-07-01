/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 20:08:39 by mgo               #+#    #+#             */
/*   Updated: 2022/06/30 19:33:02 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <string>
# include <iostream>

# define CLR_BLACK "\033[0;30m"
# define CLR_BRED "\033[1;31m"
# define CLR_BGREEN "\033[1;32m"
# define CLR_BYELLOW "\033[1;33m"
# define CLR_BBLUE "\033[1;34m"
# define CLR_BPURPLE "\033[1;35m"
# define CLR_BSKYBLUE "\033[1;36m"
# define CLR_BWHITE "\033[1;37m"
# define END_OF_CLR "\033[0;0m"

# define DFLT_NM "default"

class ClapTrap
{
private:
	std::string		name_;
	unsigned int	hit_point_;
	unsigned int	energy_point_;
	unsigned int	attack_damage_;

	void	displayHdrMsg(void) const;

public:
	ClapTrap(void);
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& cltr);
	ClapTrap&	operator=(const ClapTrap& cltr);
	~ClapTrap(void);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	const std::string&	getName(void) const;
	unsigned int		getHitPoint(void) const;
	unsigned int		getEnergyPoint(void) const;
	unsigned int		getAttackDamage(void) const;

	void	setName(const std::string& name);
	void	setHitPoint(unsigned int hp);
	void	setEnergyPoint(unsigned int ep);
	void	setAttackDamage(unsigned int ad);

};

#endif