#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name_;
	std::cout << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string name): name_(name)
{
}

Zombie::Zombie(char *name): name_(name)
{
}

Zombie::~Zombie(void)
{
}
