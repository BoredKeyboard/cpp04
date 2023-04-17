/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/17 14:39:17 by mforstho      #+#    #+#                 */
/*   Updated: 2023/04/17 14:44:15 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(void) {
}

ICharacter::ICharacter(ICharacter const & src) {
}

ICharacter::~ICharacter(void) {
}

ICharacter & ICharacter::operator=(ICharacter const & src) {
	if (this == &src)
		return (*this);
	return (*this);
}
