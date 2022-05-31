#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts_[8];
	int count_;

public:
	int add_and_save();
	int search_and_display();
};