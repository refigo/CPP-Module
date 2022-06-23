
#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	Fixed const	x_;
	Fixed const	y_;

public:
	Point(void);
	Point(const float xflt, const float yflt);
	Point(const Point& pnt);
	Point&	operator=(const Point& pnt);
	~Point(void);

	const Fixed&	getX(void) const;
	const Fixed&	getY(void) const;

	bool	bsp(Point const a, Point const b, Point const c, \
				Point const point);

};

#endif