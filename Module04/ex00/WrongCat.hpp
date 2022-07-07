#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include "WrongAnimal.hpp"

# define W_CAT_TYPE "WrongCat"

class WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	WrongCat(const WrongCat& origin);
	WrongCat&	operator=(const WrongCat& origin);
	virtual ~WrongCat(void);

	void	makeSound(void) const;
};

#endif
