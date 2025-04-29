/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 08:44:34 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/29 10:46:00 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// ! Classe cano

void	ScalarConverter::convert(std::string arg)
{
	// ! Must check parsing arg before conversion
	/*
	if (arg = INT)
		convert to ...
	else if (arg = DOUBLE)
		convert to ...
	else if (arg = FLOAT)
		convert to ...
	else if (arg = CHAR)
		convert to ...
	*/
}

void	parsing_arg(std::string arg)
{
	for (int i = 0; i < arg.length(); i++)
	{
		if (arg[i] = 'f')
			//* it's a float
		else if (arg[i] >= 0 && arg[i] <= 9) // ! attention aux negatifs
			//* its a int
		else if (arg[i] = '.')
			//*

	}
}


