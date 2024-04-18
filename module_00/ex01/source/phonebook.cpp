/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roruiz-v <roruiz-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:24:18 by roruiz-v          #+#    #+#             */
/*   Updated: 2024/04/18 19:58:00 by roruiz-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

/*
	Este constructor no toma ningún argumento; en su lugar, inicializa
	cada elemento del array 'contacts' con un objeto 'Contact' vacío.
	Como el constructor de la clase Contact inicializa los miembros de
	datos de Contact a valores razonables, este código inicializa cada
	elemento de 'contacts' a esos valores
*/
PhoneBook::PhoneBook(void) {
	for (int i = 0; i < 8; i++) {
		this->_contacts[i] = Contact(NULL, NULL, NULL, NULL, NULL);
	}
}

PhoneBook::~PhoneBook(void) {}

void Phonebook::addPhoneBookContact(std::string firstNm,
									std::string lastNm,
									std::string nickNm,
									std::string phoneNum,
									str::string darkScrt) {

	for (int i = 7; i >= 1; i--) {
		this->_contacts[i] = this->_contacts[i - 1];
	}
	
	this->_contacts[0].setFirstName(firstNm); 
	this->_contacts[0].setLastName(lasttNm); 
	this->_contacts[0].setNickName(nickNm); 
	this->_contacts[0].setPhoneNum(phoneNum);
	this->_contacts[0].setDarkSecret(darkScrt); 

}
