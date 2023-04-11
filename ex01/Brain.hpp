/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/05 15:18:37 by mforstho      #+#    #+#                 */
/*   Updated: 2023/04/05 15:32:49 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {
	protected:
		std::string ideas[100];
	public:
		Brain(void);
		Brain(Brain const & src);
		virtual ~Brain(void);
		Brain & operator=(Brain const & src);
};

#endif
