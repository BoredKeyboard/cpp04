/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/17 14:42:17 by mforstho      #+#    #+#                 */
/*   Updated: 2023/04/17 14:43:55 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>

class Cure {
	private:

	public:
		Cure(void);
		Cure(Cure const & src);
		virtual ~Cure(void);
		Cure & operator=(Cure const & src);
};

#endif
