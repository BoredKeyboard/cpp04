/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/04 16:44:22 by mforstho      #+#    #+#                 */
/*   Updated: 2023/04/05 15:15:56 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("Cat") {
	std::cout << "Default WrongCat constuctor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src) {
	std::cout << "WrongCat copy constuctor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & src) {
	if (this == &src)
		return (*this);
	this->WrongAnimal::operator=(src);
	return (*this);
}

void WrongCat::makeSound(void) const {
	std::cout << "WrongCat sound" << std::endl;
}
