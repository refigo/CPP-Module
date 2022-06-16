#include "Zombie.hpp"

int	main(void)
{
	std::string	test_string("test");
	Zombie	test(test_string);

	std::cout << "BraiiiiiiinnnzzzZ...\n";
	test.announce();
	return (0);
}
