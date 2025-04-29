/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:09:52 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/29 14:47:13 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int	main()
{
	Data	ptr;

	ptr.data = 8;

	uintptr_t	raw = Serializer::serialize(&ptr);
	Data*	data = Serializer::deserialize(raw);

	std::cout << "DATA : " << data << std::endl;
	return (0);
}
