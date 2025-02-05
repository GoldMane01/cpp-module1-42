#include "Point.hpp"

float getArea(Point const a, Point const b, Point const c) {
	float area = (a.getx().toFloat()*(b.gety().toFloat() - c.gety().toFloat()) + 
				b.getx().toFloat()*(c.gety().toFloat() - a.gety().toFloat()) + 
				c.getx().toFloat()*(a.gety().toFloat() - b.gety().toFloat())) / 2.0f;

	if (area < 0) {
		area = -area;
	}
	return (area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	
	float at = getArea(a, b, c);
	float a1 = getArea(point, b, c);
	float a2 = getArea(a, point, c);
	float a3 = getArea(a, b, point);

	if (a1 == 0 || a2 == 0 || a3 == 0) {
		return (false);
	}

	return (at == (a1 + a2 + a3));
}