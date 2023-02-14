/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkanmado <rkanmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 03:00:22 by rkanmado          #+#    #+#             */
/*   Updated: 2023/02/14 05:01:09 by rkanmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PhoneBook.hpp"

Contact getContactInfosFromUserInput()
{
	Contact contact;

	firstNameInput(contact);
	lastNameInput(contact);
	nickNameInput(contact);
	darkSecretInput(contact);
	phoneInput(contact);
	return (contact);
}

void firstNameInput(Contact &contact)
{
	std::string input;
	do
	{
		std::cout << "Please insert your first name: ";
		std::cin >> input;
		contact.setFirstName(input);
	} while (isEmpty(input));
}

void lastNameInput(Contact &contact)
{
	std::string input;
	do
	{
		std::cout << "Please insert your last name: ";
		std::cin >> input;
		contact.setLastName(input);
	} while (isEmpty(input));
}

void nickNameInput(Contact &contact)
{
	std::string input;
	do
	{
		std::cout << "Please insert your nick name: ";
		std::cin >> input;
		contact.setNickName(input);
	} while (isEmpty(input));
}

void darkSecretInput(Contact &contact)
{
	std::string input;
	do
	{
		std::cout << "Please insert your dark secret code: ";
		std::cin >> input;
		contact.setDarkestSecret(input);
	} while (isEmpty(input));
}

void phoneInput(Contact &contact)
{
	std::string input;
	do
	{
		std::cout << "Please insert your phone number: ";
		std::cin >> input;
		contact.setPhone(input);
	} while (isEmpty(input) || !isAllDigits(input));
}

void diplaySearchResult(PhoneBook &phonebook)
{
	int i = 0;
	int index;

	if (phonebook.len == 0)
	{
		std::cout << "There is no element to display";
		return ;
	}
	while (i < phonebook.len)
		displayRow(phonebook.contacts[i++]);
	std::cout << "Please enter the index to display :";
	std::cin >> index;
	if (index < 0 || index > phonebook.len)
		std::cout << "Please provide a number between " << 0 << " and " << phonebook.len - 1;
	else
		displayRow(phonebook.contacts[index]);
	return ;
}

void displayRow(Contact &contact)
{
	std::cout << contact.getIndex() << " | " << tructate(contact.getFirstName()) << " | " + \
		tructate(contact.getLastName()) << " | " << tructate(contact.getNickName()) << "\n";
	return ;
}

std::string tructate(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str.substr(0, 10);
}
