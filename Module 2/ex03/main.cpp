#include "Fixed.hpp"
#include "Point.hpp"

int main(void) {

	Point a(0.0f, 0.0f);
	Point b(10.0f, 30.0f);
	Point c(20.0f, 0.0f);
	Point point(10.0f, 30.0f);

	std::cout << bsp(a, b, c, point) << std::endl;
	

	return 0;
}