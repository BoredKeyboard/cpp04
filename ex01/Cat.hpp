/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/04 15:30:25 by mforstho      #+#    #+#                 */
/*   Updated: 2023/04/11 13:15:26 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal, public Brain {
	private:
		Brain*	_brain;
	public:
		Cat(void);
		Cat(Cat const & src);
		~Cat(void);
		Cat & operator=(Cat const & src);
		void makeSound(void) const;
};

#endif
