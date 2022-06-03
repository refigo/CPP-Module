#include "utils.hpp"

std::string get_input_trimmed_ws()
{
	std::string input;
	std::string ws;
	size_t last_not_ws;

	std::getline(std::cin >> std::ws, input);
	if (std::cin.eof())
		return ("");
	ws = " \n\r\t\f\v";
	last_not_ws = input.find_last_not_of(ws);
	return (input.substr(0, last_not_ws + 1));
}

void cout_str_with_width(std::string str, int width)
{
	if (width == 0)
		return;
	else if (str.length() > width)
		std::cout << str.substr(0, width - 1) << ".";
	else
		std::cout << std::setfill(' ') << std::setw(width) << str;
}
