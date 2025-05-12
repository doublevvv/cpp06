/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doublevv <vv>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:49:10 by doublevv          #+#    #+#             */
/*   Updated: 2025/05/12 19:31:01 by doublevv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "error : enter one argument" << std::endl;
		return (0);
	}
	else
		ScalarConverter::convert(av[1]);
}
