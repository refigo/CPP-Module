#include "Contact.hpp"

class PhoneBook
{
private:
	Contact arr[8];
	int count;

public:
	int add_and_save();
	int search_and_display();
};