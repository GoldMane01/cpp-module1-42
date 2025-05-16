#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
    std::cout << "=== Correct Animal Hierarchy ===" << std::endl;
    const Animal* animal = new Animal();
	const Dog* dog = new Dog();
	const Cat* cat = new Cat();

    std::cout << dog->getType() << " "; dog->makeSound();
    std::cout << cat->getType() << " "; cat->makeSound();
    std::cout << animal->getType() << " "; animal->makeSound();

    std::cout << "\n=== Incorrect Animal Hierarchy ===" << std::endl;
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongAnimal->getType() << " "; wrongAnimal->makeSound();
    std::cout << wrongCat->getType() << " "; wrongCat->makeSound();

	delete animal;
	delete dog;
	delete cat;
	delete wrongAnimal;
	delete wrongCat;

    return 0;
}