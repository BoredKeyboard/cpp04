/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/05 15:18:53 by mforstho      #+#    #+#                 */
/*   Updated: 2023/04/12 15:59:45 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	this->n_ideas = 0;
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const & src) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator=(Brain const & src) {
	if (this == &src)
		return (*this);
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = src._ideas[i];
	}
	return (*this);
}

void	Brain::set_idea(std::string idea) {
	if (this->n_ideas == 100) {
		std::cout << "Ideas already full" << std::endl;
		return ;
	}
	this->_ideas[this->n_ideas] = idea;
	this->n_ideas++;
}

std::string	Brain::get_idea(int n) {
	return (this->_ideas[n]);
}
