/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/04 15:42:22 by mforstho      #+#    #+#                 */
/*   Updated: 2023/04/12 16:08:32 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(Dog const & src) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog(void) {
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & src) {
	if (this == &src)
		return (*this);
	this->Animal::operator=(src);
	*this->_brain = *src._brain;
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "Woof" << std::endl;
}

void	Dog::add_idea(std::string idea) {
	this->_brain->set_idea(idea);
}

std::string	Dog::get_idea(int n) {
	return (this->_brain->get_idea(n));
}
