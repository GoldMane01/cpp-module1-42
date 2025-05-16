#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    //Animal animal;

    std::cout << "=== Testing Derived Classes ===" << std::endl;
    Dog dog;
    Cat cat;

    std::cout << "Dog is a: " << dog.getType() << std::endl;
    dog.makeSound();

    std::cout << "Cat is a: " << cat.getType() << std::endl;
    cat.makeSound();

    return 0;
}