#include "utils.hpp"

// todo: refactor
std::string get_input_with_trimming_ws()
{
	std::string input;
	std::string ws;
	size_t last_ws;

	std::getline(std::cin >> std::ws, input);
	/*
	if (std::cin.eof())
		return ("");
	*/

	ws = " \n\r\t\f\v";
	last_ws = input.find_last_not_of(ws);

	//input.substr(0, last_ws + 1)
	//input.erase(last_ws + 1)
	//return (input);
	return (input.substr(0, last_ws + 1));
}
