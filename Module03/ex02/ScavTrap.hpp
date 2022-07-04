/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:45:27 by mgo               #+#    #+#             */
/*   Updated: 2022/07/04 12:45:49 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "ClapTrap.hpp"

# define CLR_GREEN "\033[0;32m"

# define SCTR_DFLT_NM "anonymousSCTR"
# define SCTR_HP 100
# define SCTR_EP 50
# define SCTR_AD 20

class ScavTrap : public ClapTrap
{
private:
	void	displayHdrMsg_(void) const;

public:
	ScavTrap(void);
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& sctr);
	ScavTrap&	operator=(const ScavTrap& sctr);
	~ScavTrap(void);

	void	attack(const std::string& target);

	void	guardGate(void);
};

#endif