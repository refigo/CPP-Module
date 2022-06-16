#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string	name_;

public:
	void	announce(void);

	Zombie(std::string name);
	Zombie(char *name);
	~Zombie(void);
};

#endif
