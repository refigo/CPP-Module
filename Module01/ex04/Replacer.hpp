/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:17:01 by mgo               #+#    #+#             */
/*   Updated: 2022/06/19 19:42:34 by mgo              ###   ########.fr       */
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
	std::string		str_from_;
	std::string		str_to_;

	std::ifstream	infile_;
	std::ofstream	outfile_;

	Replacer(void);

public:
	bool	check_and_set_args(void);
	bool	setup_file_io(void);
	void	replace(void);

	Replacer(int argc, char **argv);
	~Replacer(void);
};

#endif