/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roruiz-v <roruiz-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:24:18 by roruiz-v          #+#    #+#             */
/*   Updated: 2024/04/24 15:34:04 by roruiz-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/*
	Este constructor no toma ningún argumento; en su lugar, inicializa
	cada elemento del array 'contacts' con un objeto 'Contact' vacío.
	Como el constructor de la clase Contact inicializa los miembros de
	datos de Contact a valores razonables, este código inicializa cada
	elemento de 'contacts' a esos valores
*/
PhoneBook::PhoneBook(void) {}

PhoneBook::~PhoneBook(void) {}

void PhoneBook::setPhoneBookContact(std::string firstNm,
									std::string lastNm,
									std::string nickNm,
									std::string phoneNum,
									std::string darkScrt) {

	for (int i = 7; i >= 1; i--) {
		this->_contacts[i] = this->_contacts[i - 1];
	}
	
	this->_contacts[0].setFirstName(firstNm); 
	this->_contacts[0].setLastName(lastNm); 
	this->_contacts[0].setNickName(nickNm); 
	this->_contacts[0].setPhoneNum(phoneNum);
	this->_contacts[0].setDarkestSecret(darkScrt); 

}

void PhoneBook::printTruncated(std::string str) {
	unsigned long	width = 10;
	
	if (str.length() > width) {
		str = str.substr(0, width - 1) + ".";
	}
	std::cout << std::setfill(' ') << std::setw(width) << std::right << str;
}

/*
 * prints all contacts into columns
*/
bool PhoneBook::getPhoneBookContact(void){
	if (this->_contacts[0].getFirstName().empty()) {
		std::cout << "  **** WARNING:   There's any contact yet !!!" << std::endl;
		std::cout << std::endl << " -------> Please, push ENTER to continue... " ;
		std::cin.get();
		return (1);
	}
	else {
		for (int contactId = 0; contactId < 8; ++contactId) {
			if (!this->_contacts[contactId].getFirstName().empty()) {
				std::cout << contactId + 1 << " | ";
				PhoneBook::printTruncated(this->_contacts[contactId].getFirstName());
				std::cout << " | ";
				PhoneBook::printTruncated(this->_contacts[contactId].getLastName());
				std::cout << " | ";
				PhoneBook::printTruncated(this->_contacts[contactId].getNickName());
				std::cout << std::endl;
			}
		}
		return (0);
	}
}

/*
*   std::atoi(id.c_str()) converts the string 'id' into a integer. 
*   'id.c_str()' is used to obtain a pointer to a char matrix, that representes the string,
*   because 'std::atoi' waits a const char* argument
*/
void PhoneBook::getPhoneBookContact(std::string id) {
	int	contactId;

	contactId = std::atoi(id.c_str());
	if ((contactId < 1 || contactId > 8) || id.length() != 1)
		std::cout << "  **** WARNING:    Number out of range or invalid entry !!!" << std::endl;
	else if (!this->_contacts[contactId - 1].getFirstName().empty()) {
		std::cout << std::setw(40) << std::setfill('-') << "-" << std::endl;
		std::cout << "First Name:      " << this->_contacts[contactId - 1].getFirstName() << std::endl;
		std::cout << "Last Name:       " << this->_contacts[contactId - 1].getLastName() << std::endl;
		std::cout << "Nick:            " << this->_contacts[contactId - 1].getNickName() << std::endl;
		std::cout << "Phone Number:    " << this->_contacts[contactId - 1].getPhoneNum() << std::endl;
		std::cout << "Darkest Secret:  " << this->_contacts[contactId - 1].getDarkestSecret() << std::endl;
		std::cout << std::setw(40) << std::setfill('-') << "-" << std::endl;
	}
	else
		std::cout << "  **** WARNING:    The contact doesn't exist !!!" << std::endl;
	std::cout << std::endl << " -----> Please, push ENTER to continue... " ;
	std::cin.get();
}
