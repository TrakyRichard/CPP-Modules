/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkanmado <rkanmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:12:04 by rkanmado          #+#    #+#             */
/*   Updated: 2023/02/14 05:02:51 by rkanmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool isEmpty(std::string str)
{
	if (str.empty())
	{
		std::cout << "The input must be filled";
		return (true);
	}
	return (false);
}

bool isAllDigits(std::string str)
{
	if (str.find_first_not_of("0123456789") != std::string::npos)
	{
		std::cout << "The phone must be all digits." << std::endl;
		return (false);
	}
	return (true);
}
