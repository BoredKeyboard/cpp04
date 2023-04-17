/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/17 14:42:20 by mforstho      #+#    #+#                 */
/*   Updated: 2023/04/17 14:44:08 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) {
}

Ice::Ice(Ice const & src) {
}

Ice::~Ice(void) {
}

Ice & Ice::operator=(Ice const & src) {
	if (this == &src)
		return (*this);
	return (*this);
}
