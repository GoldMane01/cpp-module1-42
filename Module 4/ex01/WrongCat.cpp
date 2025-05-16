#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = "WrongCat";
	std::cout << ">> WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) {
	this->type = other.type;
	std::cout << ">> WrongCat opy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	if (this != &other) {
		this->type = other.type;
	}
	std::cout << ">> WrongCat opy assignment operator called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << ">> WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Meow" << std::endl;
}
