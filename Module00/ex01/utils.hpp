// mgo
#ifndef UTILS_HPP
#define UTILS_HPP

#include <iostream>
#include <string>

enum e_bool
{
	FALSE,
	TRUE
};

enum e_result
{
	FAIL,
	SUCCESS
};

std::string get_input_trimmed_ws(void);

#endif
