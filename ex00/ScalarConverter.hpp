/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doublevv <vv>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 07:30:07 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/05/12 18:42:14 by doublevv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cstring>
#include <cmath>
#include <limits>

class ScalarConverter
{
public:
	static void convert(std::string);

private:
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(ScalarConverter const &obj);
	ScalarConverter &operator=(const ScalarConverter &rhs);
};

void	isnt_int(std::string arg);
void	isnt_float(std::string arg);
void	isnt_double(std::string arg);
void	isnt_char(std::string arg);
bool	isnt_digits(std::string arg);

#endif
