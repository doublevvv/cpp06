/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doublevv <vv>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 08:44:34 by doublevv          #+#    #+#             */
/*   Updated: 2025/05/12 20:12:16 by doublevv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// ! Classe cano a implenter
// ! std::strtod verifier lib
// ! static cast

void	ScalarConverter::convert(std::string arg)
{
	isnt_float(arg);
	isnt_double(arg);
	isnt_int(arg);
	isnt_char(arg);
}

void	isnt_int(std::string arg)
{
	char *end;
	long double nbr = strtold(arg.c_str(), &end);
	if (nbr > std::numeric_limits<int>::max() || nbr < std::numeric_limits<int>::min() || end == arg.c_str())
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int = " << static_cast<int>(nbr) << std::endl;
}
void	isnt_float(std::string arg)
{
	char *end;
	long double nbr = strtold(arg.c_str(), &end);
	if (std::isnan(nbr))
		std::cout << "" << nbr << " = nanf" << std::endl;
	else if (nbr > std::numeric_limits<float>::max() || nbr < -std::numeric_limits<float>::max() || end == arg.c_str())
		std::cout << "float : impossible" << std::endl;
	else
		std::cout << "float = " << static_cast<float>(nbr) << std::endl;
}

void	isnt_double(std::string arg)
{
	char *end;
	long double nbr = strtold(arg.c_str(), &end);
	if (std::isnan(nbr))
		std::cout << "" << nbr << " = nanf" << std::endl;
	else if (nbr > std::numeric_limits<double>::max() || nbr < -std::numeric_limits<double>::max() || end == arg.c_str())
		std::cout << "double : impossible" << std::endl;
	else
		std::cout << "double = " << static_cast<double>(nbr) << std::endl;
}

void	isnt_char(std::string arg)
{
	long double nbr = strtold(arg.c_str(), NULL);
	if (isnt_digits(arg) == false)
		std::cout << "char : impossible to print char" << std::endl;
	else if (isnt_digits(arg) == true)
		std::cout << "char = " << static_cast<char>(arg[0]) << std::endl;
	else
		std::cout << "char = " << static_cast<char>(nbr) << std::endl;
}

bool	isnt_digits(std::string arg)
{
	if (arg.length() == 1 && !isdigit(arg[0]))
		return (true);
	else if (arg.length() == 3 && arg[0] == '\'' && arg[2] == '\'')
		return (true);
	else
		return (false);
}




