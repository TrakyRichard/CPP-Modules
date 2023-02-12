/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkanmado <rkanmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 08:08:03 by rkanmado          #+#    #+#             */
/*   Updated: 2023/01/30 08:53:48 by rkanmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int arc, char **arv)
{
	int counter = 0;
	int i = 1;
	if (arc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	while (i < arc)
	{
		counter = 0;
		while (arv[i][counter])
		{
			if (arv[i][counter] >= 'a' && arv[i][counter] <= 'z')
				std::cout <<char (arv[i][counter] - 32);
			else
				std::cout << arv[i][counter];
			counter++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
