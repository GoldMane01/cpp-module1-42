#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << ">> Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) {
	this->type = other.type;
	std::cout << ">> Cat opy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		this->type = other.type;
	}
	std::cout << ">> Cat opy assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat() {
	std::cout << ">> Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow" << std::endl;
}
