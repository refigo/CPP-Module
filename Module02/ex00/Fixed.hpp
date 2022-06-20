#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					value_;
	static const int	num_frac_bits_ = 8;

public:
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	Fixed(void);							// A default constructor that initializes the fixed-point number value to 0.
	Fixed(const Fixed& fixed);				// A copy constructor.
	Fixed&	operator=(const Fixed& fixed);	// A copy assignment operator overload.
	~Fixed(void);							// A destructor.
};

#endif