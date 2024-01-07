#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"


int main(){
	Animal* _Animal = new Animal();
	Animal* _Dog = new Dog();
	Animal* _Cat = new Cat();
	Dog _Dog2 = Dog();
	Animal* _Animal2 = new Animal("Dog");
	std::cout << _Dog->getType() << " " << std::endl;
	std::cout << _Cat->getType() << " " << std::endl;
	_Dog->makeSound();
	_Cat->makeSound();
	_Animal->makeSound();
	_Animal->setType("Animal");
	_Animal2->makeSound();
	_Animal2->setType("Cat");
	_Animal2->makeSound();
	_Animal2->makeSound();
	delete _Animal;
	delete _Dog;
	delete _Cat;
	return 0;
}