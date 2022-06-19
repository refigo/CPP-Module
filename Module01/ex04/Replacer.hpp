/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:17:01 by mgo               #+#    #+#             */
/*   Updated: 2022/06/19 19:23:47 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
# define REPLACER_HPP

# include <string>
# include <fstream>

class Replacer
{
private:
	int				argc_;
	char			**argv_;

	std::string		filename_;
	std::string		s1_;
	std::string		s2_;

	std::ifstream	infile_;
	std::ofstream	outfile_;

	Replacer(void);

public:
	bool	check_and_set_args(void);
	void	setup(void);
	void	replace(void);

	Replacer(int argc, char **argv);
	~Replacer(void);
};

#endif