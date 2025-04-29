/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 07:30:07 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/28 13:25:38 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cstring>

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

void	parsing_arg(std::string);

#endif
