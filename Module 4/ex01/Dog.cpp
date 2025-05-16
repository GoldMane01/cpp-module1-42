#include "Dog.hpp"

Dog::Dog() : brain(new Brain()) {
	this->type = "Dog";
	std::cout << ">> Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain)) {
	std::cout << ">> Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		this->type = other.type;
		delete brain;
        brain = new Brain(*other.brain);
	}
	std::cout << ">> Dog copy assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog() {
	delete brain;
	std::cout << ">> Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof" << std::endl;
}

Brain* Dog::getBrain() const {
    return brain;
}