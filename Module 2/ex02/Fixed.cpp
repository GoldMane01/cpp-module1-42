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

Fixed Fixed::operator*(const Fixed& other) const {
    Fixed result;
    result.setRawBits((this->value * other.value) >> fraction);
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
    Fixed result;
    result.setRawBits((this->value << fraction) / other.value);
    return result;
}

Fixed Fixed::operator+(const Fixed& other) const {
    Fixed result;
    result.setRawBits(this->value + other.value);
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
    Fixed result;
    result.setRawBits(this->value - other.value);
    return result;
}

bool Fixed::operator>(const Fixed& other) const {
    return this->value > other.value;
}

bool Fixed::operator<(const Fixed& other) const {
    return this->value < other.value;
}

bool Fixed::operator>=(const Fixed& other) const {
    return this->value >= other.value;
}

bool Fixed::operator<=(const Fixed& other) const {
    return this->value <= other.value;
}

bool Fixed::operator==(const Fixed& other) const {
    return this->value == other.value;
}

bool Fixed::operator!=(const Fixed& other) const {
    return this->value != other.value;
}

Fixed& Fixed::operator++() {
    this->value++;
    return *this;
}

Fixed& Fixed::operator--() {
    this->value--;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    this->value++;
    return temp;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    this->value--;
    return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if (a.value < b.value) {
		return (a);
	} else {
		return (b);
	}
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	if (a.value < b.value) {
		return (a);
	} else {
		return (b);
	}
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if (a.value > b.value) {
		return (a);
	} else {
		return (b);
	}
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	if (a.value > b.value) {
		return (a);
	} else {
		return (b);
	}
}

