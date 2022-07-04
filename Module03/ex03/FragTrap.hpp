/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:55:54 by mgo               #+#    #+#             */
/*   Updated: 2022/07/04 16:36:57 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"

# define CLR_PURPLE "\033[0;35m"

# define FRTR_DFLT_NM "anonymousFRTR"
# define FRTR_HP 100
# define FRTR_EP 100
# define FRTR_AD 30

class FragTrap : virtual public ClapTrap
{
private:
	void	displayHdrMsg_(void) const;

public:
	FragTrap(void);
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& frtr);
	FragTrap&	operator=(const FragTrap& frtr);
	~FragTrap(void);

	void	highFivesGuys(void);
};

#endif