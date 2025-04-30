/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 08:44:34 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/30 14:29:11 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// ! Classe cano
// ! std::strtod verifier lib
// ! static cast

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

// * utiliser boolean
void	parsing_arg(std::string arg)
{
	if (isnt_int(arg) == true)
	{
		ScalarConverter a = static_cast<int>(arg);
	}
	else if (isnt_float(arg) == true)
	{

	}
	else if (isnt_double(arg) == true)
	{

	}
	else if (isnt_char(arg) == true)
	{

	}
	else
	{
		std::cout << "incorrect input" << std::endl;
	}
}

bool	isnt_int(std::string arg)
{
	for (int i = 0; i < arg.length(); i++)
	{
		if (arg[i] >= 0 && arg[i] <= 9)
			return (true);
	}
	return (false);
}
bool	isnt_float(std::string arg)
{
	for (int i = 0; i < arg.length(); i++)
	{
		if (arg[i] == 'f')
			return (true);
	}
	return (false);
}

bool	isnt_double(std::string arg)
{
	for (int i = 0; i < arg.length(); i++)
	{
		if (arg[i] == '.')
			return (true);
	}
	return (false);
}

bool	isnt_char(std::string arg)
{
	for (int i = 0; i < arg.length(); i++)
	{

	}
	return (false);
}




