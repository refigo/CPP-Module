#include "Point.hpp"

Point::Point(void)
	: x_(0), y_(0) {}

Point::Point(const float xflt, const float yflt)
	: x_(xflt), y_(yflt) {}

Point::Point(const Point& pnt) {
	*this = pnt;
}

Point&	Point::operator=(const Point& pnt) {
	const_cast<Fixed&>(x_) = pnt.getX();
	const_cast<Fixed&>(y_) = pnt.getY();
	return (*this);
}

Point::~Point(void) {}

const Fixed&	Point::getX(void) const {
	return (x_);
}

const Fixed&	Point::getY(void) const {
	return (y_);
}
