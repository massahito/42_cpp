#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include <string>
int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	std::cout << "meta was deleted" << std::endl;
	delete j;
	std::cout << "dog was deleted" << std::endl;
	delete i;
	std::cout << "cat was deleted" << std::endl;
	return 0;
}
