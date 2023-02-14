/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookM.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkanmado <rkanmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 07:29:46 by rkanmado          #+#    #+#             */
/*   Updated: 2023/02/14 04:56:53 by rkanmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_M
#define PHONEBOOK_M
#include "./Contact.cpp"
#include "string"
#include "iostream"

class PhoneBook {
	public:
		Contact contacts[8];
		int		len;

	public:
		PhoneBook() {
			this->len = 0;
		};
		void addContact(Contact contact, int index)
		{
			if (index < 8)
			{
				this->contacts[index] = contact;
				this->len += 1;
			}
			else
				this->contacts[this->len] = contact;
			std::cout << "CONTACT " << index + 1 << " ADDED";
			return ;
		}
};

#endif
