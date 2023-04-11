/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/04 15:42:17 by mforstho      #+#    #+#                 */
/*   Updated: 2023/04/05 15:36:46 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal, public Brain {
	public:
		Dog(void);
		Dog(Dog const & src);
		~Dog(void);
		Dog & operator=(Dog const & src);
		void makeSound(void) const;
};

#endif
