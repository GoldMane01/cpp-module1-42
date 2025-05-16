#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {

	int ARRAY_SIZE = 6;

	std::cout << "=== Animal Array Test ===" << std::endl;
    Animal* animals[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE / 2; ++i) {
        animals[i] = new Dog();
    }
    for (int i = ARRAY_SIZE / 2; i < ARRAY_SIZE; ++i) {
        animals[i] = new Cat();
    }

    std::cout << "\n=== Making Sounds ===" << std::endl;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        std::cout << animals[i]->getType() << " says: ";
        animals[i]->makeSound();
    }

    std::cout << "\n=== Cleaning Up ===" << std::endl;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        delete animals[i];
    }

	std::cout << "\n=== Deep Copy Test ===" << std::endl;
    
    Dog dog1;
    dog1.getBrain()->setIdea(0, "Chase the ball");

    Dog dog2 = dog1;

    std::cout << "Dog1 Brain Idea: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2 Brain Idea: " << dog2.getBrain()->getIdea(0) << std::endl;

    dog2.getBrain()->setIdea(0, "Sleep in the sun");

    std::cout << "After modifying Dog2's brain:" << std::endl;
    std::cout << "Dog1 Brain Idea: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2 Brain Idea: " << dog2.getBrain()->getIdea(0) << std::endl;

    return 0;
}