/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/17 14:20:47 by mforstho      #+#    #+#                 */
/*   Updated: 2023/04/17 15:53:07 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) {
}

AMateria::AMateria(AMateria const & src) {
}

AMateria::~AMateria(void) {
}

AMateria & AMateria::operator=(AMateria const & src) {
	if (this == &src)
		return (*this);
	return (*this);
}

std::string	const AMateria::getType(void) const {
	return (this->type);
}
