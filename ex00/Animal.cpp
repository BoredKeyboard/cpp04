/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/04 15:25:36 by mforstho      #+#    #+#                 */
/*   Updated: 2023/04/04 16:12:42 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "Default Animal constructor called" << std::endl;
	this->_type = "";
}

Animal::Animal(std::string type) {
	std::cout << "Animal ntype constructor called" << std::endl;
	this->_type = type;
}

Animal::Animal(Animal const & src) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=(Animal const & src) {
	if (this == &src)
		return (*this);
	this->_type = src._type;
	return (*this);
}

std::string Animal::getType(void) const {
	return (this->_type);
}

void Animal::makeSound(void) const {
	std::cout << "Standard Animal sound" << std::endl;
}
