#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"


int main(){
	Animal _Animal[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			_Animal[i] = Dog();
		else
			_Animal[i] = Cat();
	}
	return 0;
}