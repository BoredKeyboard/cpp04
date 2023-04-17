/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/17 14:42:14 by mforstho      #+#    #+#                 */
/*   Updated: 2023/04/17 14:44:03 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) {
}

Cure::Cure(Cure const & src) {
}

Cure::~Cure(void) {
}

Cure & Cure::operator=(Cure const & src) {
	if (this == &src)
		return (*this);
	return (*this);
}
