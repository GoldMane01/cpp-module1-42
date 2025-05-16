#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << ">> WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	this->type = other.type;
	std::cout << ">> WrongAnimal opy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other) {
		this->type = other.type;
	}
	std::cout << ">> WrongAnimal opy assignment operator called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << ">> WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "* woodcrawler noises *" << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->type;
}