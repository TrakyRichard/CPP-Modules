/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkanmado <rkanmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 07:33:35 by rkanmado          #+#    #+#             */
/*   Updated: 2023/02/14 04:47:50 by rkanmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "string"
#include "iostream"
#include "./models/Contact.cpp"
#include "./models/PhoneBookM.cpp"

#define ADDCONTACT ADD
#define SEARCHCONTACT SEARCH
#define EXITPRG EXIT

bool isAllDigits(std::string str);
bool isEmpty(std::string str);
Contact getContactInfosFromUserInput();
void firstNameInput(Contact &contact);
void lastNameInput(Contact &contact);
void nickNameInput(Contact &contact);
void darkSecretInput(Contact &contact);
void phoneInput(Contact &contact);
void displayRow(Contact &contact);
void diplaySearchResult(PhoneBook &phonebook);
void displayRow(Contact &contact);
std::string tructate(std::string str);

#endif
