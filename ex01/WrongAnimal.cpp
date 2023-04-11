/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/04 16:44:26 by mforstho      #+#    #+#                 */
/*   Updated: 2023/04/05 13:56:00 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	std::cout << "Default WrongAnimal constructor called" << std::endl;
	this->_type = "";
}

WrongAnimal::WrongAnimal(std::string type) {
	std::cout << "WrongAnimal type constructor called" << std::endl;
	this->_type = type;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & src) {
	if (this == &src)
		return (*this);
	this->_type = src._type;
	return (*this);
}

std::string WrongAnimal::getType(void) const {
	return (this->_type);
}

void WrongAnimal::makeSound(void) const {
	std::cout << "WrongAnimal noise" << std::endl;
}
