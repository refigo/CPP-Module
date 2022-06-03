// mgo
#ifndef UTILS_HPP
#define UTILS_HPP

#include <iostream>
#include <iomanip>
#include <string>

#define B_WHITE "\033[1;37m"
#define END_OF_COLOR "\033[0;0m"

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
void cout_str_with_width(std::string str, int width);

#endif
