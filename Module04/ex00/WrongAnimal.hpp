#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <string>
# include <iostream>

# define W_ANML_TYPE "WrongAnimal"

class WrongAnimal
{
protected:
	std::string	type;

	WrongAnimal(const std::string& type_arg);

	void	dsplyTypeHdrMsg(void) const;

public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& origin);
	WrongAnimal&	operator=(const WrongAnimal& origin);
	virtual ~WrongAnimal(void);

	void	makeSound(void) const;

	const std::string&	getType(void) const;
	void				setType(const std::string& type_arg);
};

#endif
