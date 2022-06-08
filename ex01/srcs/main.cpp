/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 09:26:52 by jmaia             #+#    #+#             */
/*   Updated: 2022/06/08 10:17:42 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "iter.hpp"

static void	printMinusOne(int &nbr);
static void	print(std::string &str);
static void	addOne(int &nbr);

int	main(void)
{
	int			intArray[5] = {5, 4, 2, 1, 0};
	std::string	strArray[3] = {"Salut", " les ", "copains"};

	iter(intArray, 5, &printMinusOne);
	iter(strArray, 3, &print);
	iter(intArray, 5, &addOne);
	iter(intArray, 5, &printMinusOne);
}

static void	printMinusOne(int &nbr)
{
	std::cout << nbr - 1;
}

static void	print(std::string &str)
{
	std::cout << str;
}

static void	addOne(int &nbr)
{
	nbr++;
}
