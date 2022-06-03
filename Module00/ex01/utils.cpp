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
