/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/17 14:42:22 by mforstho      #+#    #+#                 */
/*   Updated: 2023/04/17 14:43:04 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>

class Ice {
	private:
		const std::string type = "ice";
	public:
		Ice(void);
		Ice(Ice const & src);
		virtual ~Ice(void);
		Ice & operator=(Ice const & src);
};

#endif
