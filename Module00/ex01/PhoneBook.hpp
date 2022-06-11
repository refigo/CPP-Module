/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:24:21 by mgo               #+#    #+#             */
/*   Updated: 2022/06/11 17:14:58 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include "utils.hpp"
# include <iostream>
# include <iomanip>
# include <string>

# define CONTACTS_MAX 8

class PhoneBook
{
private:
	Contact 	contacts_[CONTACTS_MAX];
	int 		current_contact_count_;
	int 		current_contact_position_;
	std::string cmd_;

	void display_contacts_header_(void) const;
	void display_contact_index_names_(int i) const;
	
	void get_input_index_and_display_contact_infos(void) const;

public:
	void set_input_cmd(void);
	bool is_cmd_add(void) const;
	bool is_cmd_search(void) const;
	bool is_cmd_exit(void) const;

	void save_contact(void);
	void display_and_search_contacts(void) const;

	PhoneBook(void);
	~PhoneBook(void);
};

#endif
