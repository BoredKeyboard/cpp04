/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/04 15:33:53 by mforstho      #+#    #+#                 */
/*   Updated: 2023/04/18 15:59:26 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(Cat const & src) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat(void) {
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator=(Cat const & src) {
	if (this == &src)
		return (*this);
	this->Animal::operator=(src);
	*this->_brain = *src._brain;
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "Meow" << std::endl;
}

void	Cat::add_idea(std::string idea) {
	this->_brain->set_idea(idea);
}

std::string const &	Cat::get_idea(int n) {
	return (this->_brain->get_idea(n));
}
