#include "Point.hpp"

Point::Point() {
	this->x = Fixed(0);
	this->y = Fixed(0);
	//std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float x, const float y) {
	this->x = Fixed(x);
	this->y = Fixed(y);
	//std::cout << "Default constructor called" << std::endl;
}

Point::Point(const Point& other) {
	this->x = other.x;
	this->y = other.y;
	//std::cout << "Copy constructor called" << std::endl;
}

Point& Point::operator=(const Point& other) {
	if (this != &other) {
		this->x = other.x;
		this->y = other.y;
	}
	//std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Point::~Point() {
	//std::cout << "Destructor called" << std::endl;
}

Fixed const Point::getx() const {
	return (this->x);
}

Fixed const Point::gety() const {
	return (this->y);
}