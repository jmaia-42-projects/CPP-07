/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:11:37 by jmaia             #+#    #+#             */
/*   Updated: 2022/06/08 14:27:06 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>

template<typename T>
Array<T>::Array(void)
{
	this->array = new T[0];
	this->_size = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	this->array = new T[n];
	this->_size = n;
}

template<typename T>
Array<T>::Array(Array<T> const &obj)
{
	this->array = 0;
	*this = obj;
}

template<typename T>
Array<T>::~Array(void)
{
	delete[] this->array;
}

template<typename T>
Array<T>	&Array<T>::operator=(Array<T> const &obj)
{
	delete[] this->array;
	this->array = new T[obj._size];
	this->_size = obj._size;
	for (unsigned int i = 0; i < obj._size; i++)
		this->array[i] = obj.array[i];
	return (*this);
}

template<typename T>
T	&Array<T>::operator[](unsigned int i) const
{
	if (i >= this->_size)
		throw Array<T>::ArrayOutOfBoundsException(i);
	return (this->array[i]);
}

template<typename T>
size_t	Array<T>::size(void) const
{
	return (this->_size);
}

template<typename T>
Array<T>::ArrayOutOfBoundsException::ArrayOutOfBoundsException(unsigned int i) throw()
{
	std::stringstream	ss;

	this->i = i;
	ss << "Array out of bounds exception: ";
	ss << this->i;
	this->msg = ss.str();
}

template<typename T>
Array<T>::ArrayOutOfBoundsException::~ArrayOutOfBoundsException(void) throw()
{
	
}

template<typename T>
const char	*Array<T>::ArrayOutOfBoundsException::what(void) const throw()
{
	return (this->msg.c_str());
}
