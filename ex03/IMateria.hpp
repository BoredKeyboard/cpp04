/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/17 14:39:28 by mforstho      #+#    #+#                 */
/*   Updated: 2023/04/17 14:44:43 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef IMATERIA_HPP
# define IMATERIA_HPP

# include <iostream>

class IMateria {
	private:

	public:
		IMateria(void);
		IMateria(IMateria const & src);
		virtual ~IMateria(void);
		IMateria & operator=(IMateria const & src);
};

#endif
