#include "Harl.hpp"
#include <iostream>

void	Harl::complain(std::string level)
{
	if (level == "DEBUG")
		status_ = HARL_DEBUG;
	else if (level == "INFO")
		status_ = HARL_INFO;
	else if (level == "WARNING")
		status_ = HARL_WARNING;
	else if (level == "ERROR")
		status_ = HARL_ERROR;
	else
		status_ = HARL_UNKNOWN;
	
	switch (status_)
	{
		case HARL_DEBUG:
			std::cout << "debug\n";
			break ;
		case HARL_INFO:
			std::cout << "info\n";
			break ;
		case HARL_WARNING:
			std::cout << "warning\n";
			break ;
		case HARL_ERROR:
			std::cout << "error\n";
			break ;
		default:
			std::cout << "unknown\n";
	}
}

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}
