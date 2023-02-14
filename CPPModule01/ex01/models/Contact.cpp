/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkanmado <rkanmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 07:28:49 by rkanmado          #+#    #+#             */
/*   Updated: 2023/02/14 04:56:31 by rkanmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_H
#define CONTACT_H

#include "string"
#include "iostream"
class Contact {
	private:
		int index;
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phone;
		std::string darkestSecret;

	public:
		Contact()
		{
			this->index = 0;
			this->firstName = "";
			this->lastName = "";
			this->nickName = "";
			this->phone = "";
			this->darkestSecret = "";
		}
		void setIndex(int index) { this->index = index; };
		void setFirstName(std::string firstName) { this->firstName = firstName; };
		void setLastName(std::string lastName) { this->lastName = lastName; };
		void setNickName(std::string nickName) { this->nickName = nickName; };
		void setPhone(std::string phone) { this->phone = phone ;};
		void setDarkestSecret(std::string darkestSecret) { this->darkestSecret = darkestSecret; };

	public:
		int			getIndex() { return (this->index); };
		std::string getFirstName() { return (this->firstName); };
		std::string getLastName() { return (this->lastName); };
		std::string getNickName() { return (this->nickName); };
		std::string getPhone() { return (this->phone); };
		std::string getDarkestSecret() { return (this->darkestSecret); };
};
#endif
