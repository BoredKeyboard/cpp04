/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/17 14:39:24 by mforstho      #+#    #+#                 */
/*   Updated: 2023/04/17 14:44:34 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "IMateria.hpp"

IMateria::IMateria(void) {
}

IMateria::IMateria(IMateria const & src) {
}

IMateria::~IMateria(void) {
}

IMateria & IMateria::operator=(IMateria const & src) {
	if (this == &src)
		return (*this);
	return (*this);
}
