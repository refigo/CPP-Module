#include "Fixed.hpp"
#include <iostream>

static void	display_pdf_test(void)
{
	Fixed			a;
	Fixed const		b( Fixed( 5.05f ) * Fixed( 2 ));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
}

static void	display_mgo_test(void)
{
	std::cout.setf(std::ios::boolalpha);
	std::cout << "\n--- Test comparsion operators ---" << '\n';
	{
		std::cout << (Fixed(42) == Fixed(42)) << '\n';
		std::cout << (Fixed(4.2f) == Fixed(4.2f)) << '\n';
		std::cout << (Fixed(41) <= Fixed(42)) << '\n';
		std::cout << (Fixed(42) <= Fixed(42)) << '\n';
		std::cout << (Fixed(42) >= Fixed(41)) << '\n';
		std::cout << (Fixed(42) >= Fixed(42)) << '\n';
		std::cout << (Fixed(0.1f) >= Fixed(0.0f)) << '\n';
		std::cout << (Fixed(0.1f) != Fixed(0.01f)) << '\n';
	}
	std::cout << "\n--- Test arithmetic operators ---" << '\n';
	{
		std::cout << Fixed(42) + Fixed(42) << '\n';
		std::cout << Fixed(0.25f) + Fixed(0.5f) << '\n';
		std::cout << Fixed(-0.25f) + Fixed(10.0f) << '\n';
		std::cout << Fixed(42) - Fixed(42) << '\n';
		std::cout << Fixed(-10) - Fixed(1.5f) << '\n';
		std::cout << Fixed(1000) - Fixed(10) << '\n';
		std::cout << Fixed(42) * Fixed(42) << '\n';
		std::cout << Fixed(42) / Fixed(42) << '\n';
		std::cout << Fixed(1) / Fixed(2) << '\n';
		std::cout << Fixed(1) / Fixed(3) << '\n';
		std::cout << Fixed(1) / Fixed(4) << '\n';
	}
	std::cout << "\n--- Test [pre/post]fix [in/de]crement operators ---" << '\n';
	{
		Fixed a, b;
		std::cout << a++ << '\n';
		std::cout << a << '\n';
		std::cout << ++a << '\n';
		std::cout << b-- << '\n';
		std::cout << b << '\n';
		std::cout << --b << '\n';
	}
	std::cout << "\n--- Test min / max static function ---" << '\n';
	{
		std::cout << "max(41.9, 42.001): " \
			<< Fixed::max(Fixed(41.9f), Fixed(42.001f)) << '\n';
		std::cout << "max(42, 43.001): " \
			<< Fixed::max(Fixed(42), Fixed(43.001f)) << '\n';
		std::cout << "min(41.9, 42.001): " \
			<< Fixed::min(Fixed(41.9f), Fixed(42.001f)) << '\n';
		std::cout << "min(42, 43.001): " \
			<< Fixed::min(Fixed(42), Fixed(43.001f)) << '\n';
	}
}

int	main(void)
{
	display_pdf_test();
	std::cout << std::endl;
	display_mgo_test();
	std::cout << std::endl;
	return (0);
}
