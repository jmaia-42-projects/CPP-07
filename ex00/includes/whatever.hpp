/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 09:17:51 by jmaia             #+#    #+#             */
/*   Updated: 2022/06/08 09:20:56 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &val1, T &val2)
{
	T	tmp;

	tmp = val1;
	val1 = val2;
	val2 = tmp;
}

template<typename T>
T	min(T &val1, T &val2)
{
	if (val1 < val2)
		return (val1);
	return (val2);
}

template<typename T>
T	max(T &val1, T &val2)
{
	if (val1 > val2)
		return (val1);
	return (val2);
}

#endif
