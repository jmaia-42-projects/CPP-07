/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:18:49 by jmaia             #+#    #+#             */
/*   Updated: 2022/06/08 14:02:07 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class	Array
{
	private:
		size_t	_size;
		T		*array;
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const &obj);
		~Array(void);

		Array	&operator=(Array const &obj);
		T		&operator[](unsigned int i) const;
		size_t	size(void) const;

		class ArrayOutOfBoundsException:	public std::exception
		{
			private:
				unsigned int	i;
				std::string		msg;
			public:
				ArrayOutOfBoundsException(unsigned int i) throw();
				virtual ~ArrayOutOfBoundsException(void) throw();
				const char	*what(void) const throw();
		};
};

#include "Array.tpp"

#endif
