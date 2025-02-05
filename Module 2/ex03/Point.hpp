#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {

private:
	Fixed x;
	Fixed y;

public:
	Point();
	Point(const float x, const float y);
	Point& operator=(const Point& other);
	Point(const Point& other);
	~Point();

	Fixed const getx(void) const;
	Fixed const gety(void) const;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif