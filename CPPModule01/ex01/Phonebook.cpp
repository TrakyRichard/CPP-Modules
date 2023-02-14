/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkanmado <rkanmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 05:43:23 by rkanmado          #+#    #+#             */
/*   Updated: 2023/02/14 04:49:47 by rkanmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int arc, char **arg)
{
	(void) arg;
	(void) arc;
	PhoneBook phonebook;
	std::string choice;

	while (1)
	{
		std::cout << "Which action do you want to make" <<
		std::endl << "Possible actions (ADD, SEARCH, EXIT): ";
		std::cin >> choice;
		if (choice == "ADD")
			phonebook.addContact(getContactInfosFromUserInput(), phonebook.len);
		else if (choice == "SEARCH")
			diplaySearchResult(phonebook);
		else if (choice == "EXIT")
		{
			std::cout << "GOODBY !";
			return (0);
		}
		else
			std::cout << "This action does not exist";
		std::cout << std::endl;
	}
	return (0);
}
