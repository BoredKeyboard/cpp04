/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/05 15:18:53 by mforstho      #+#    #+#                 */
/*   Updated: 2023/04/05 15:19:14 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
}

Brain::Brain(Brain const & src) {
}

Brain::~Brain(void) {
}

Brain & Brain::operator=(Brain const & src) {
	if (this == &src)
		return (*this);
	return (*this);
}
