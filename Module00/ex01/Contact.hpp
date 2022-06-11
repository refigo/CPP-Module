/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:24:02 by mgo               #+#    #+#             */
/*   Updated: 2022/06/11 12:14:08 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "utils.hpp"
# include <iostream>
# include <string>

class Contact
{
private:
	std::string first_name_;
	std::string last_name_;
	std::string nickname_;
	std::string phone_number_;
	std::string darkest_secret_;

	bool set_input_first_name_(void);
	bool set_input_last_name_(void);
	bool set_input_nickname_(void);
	bool set_input_phone_number_(void);
	bool set_input_darkest_secret_(void);

public:
	bool set_inputs_infos(void);

	std::string get_first_name(void);
	std::string get_last_name(void);
	std::string get_nickname(void);
	std::string get_phone_number(void);
	std::string get_darkest_secret(void);

	void display_infos(void);
};

#endif
