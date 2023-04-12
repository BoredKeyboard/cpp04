/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/04 15:23:56 by mforstho      #+#    #+#                 */
/*   Updated: 2023/04/12 16:43:47 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	leakfunc(void) {
	system("leaks -q animals");
}

int main()
{
	atexit(leakfunc);
	// {
	// 	const Animal* j = new Dog();
	// 	const Animal* i = new Cat();
	// 	delete j;//should not create a leak
	// 	delete i;
	// 	return 0;
	// }
	{
		Cat	a;
		Cat b;

		a.add_idea("test");
		b = a;
		std::cout << "Cat a idea 0: " << a.get_idea(0) << std::endl;
		std::cout << "Cat b idea 0: " << b.get_idea(0) << std::endl;
		a.add_idea("foo");
		std::cout << "Added new idea to Cat a" << std::endl;
		std::cout << "Cat a idea 1: " << a.get_idea(1) << std::endl;
		std::cout << "Cat b idea 1: " << b.get_idea(1) << std::endl;
	}
	{
		std::cout << std::endl;
		Dog	a;
		Dog b;

		a.add_idea("test");
		b = a;
		std::cout << "Dog a idea 0: " << a.get_idea(0) << std::endl;
		std::cout << "Dog b idea 0: " << b.get_idea(0) << std::endl;
		a.add_idea("foo");
		std::cout << "Added new idea to Dog a" << std::endl;
		std::cout << "Dog a idea 1: " << a.get_idea(1) << std::endl;
		std::cout << "Dog b idea 1: " << b.get_idea(1) << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << std::endl;
		int	amount = 10;
		Animal* animals[10];
		for (int i = 0; i < amount; i++) {
			if (i % 2)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
			std::cout << std::endl;
		}
		std::cout << std::endl;
		std::cout << std::endl;
		for (int i = 0; i < amount; i++) {
			delete animals[i];
			std::cout << std::endl;
		}
	}

	return (EXIT_SUCCESS);
}
