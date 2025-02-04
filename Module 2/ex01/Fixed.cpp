#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int intValue) {
	std::cout << "Int constructor called" << std::endl;
	this->value = intValue << fraction;
}

Fixed::Fixed(float floatValue) {
    std::cout << "Float constructor called" << std::endl;
    this->value = static_cast<int>(roundf(floatValue * (1 << fraction)));
}

Fixed::Fixed(const Fixed& other) {
	this->value = other.value;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
	if (this != &other) {
		this->value = other.value;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

int Fixed::toInt(void) const {
	return this->value >> fraction;
}

float Fixed::toFloat(void) const {
	return (static_cast<float>(this->value) / (1 << fraction));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
