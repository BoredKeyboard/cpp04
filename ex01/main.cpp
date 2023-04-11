/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/04 15:23:56 by mforstho      #+#    #+#                 */
/*   Updated: 2023/04/11 15:33:52 by mforstho      ########   odam.nl         */
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
