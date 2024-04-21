/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roruiz-v <roruiz-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:24:18 by roruiz-v          #+#    #+#             */
/*   Updated: 2024/04/22 01:22:53 by roruiz-v         ###   ########.fr       */
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
PhoneBook::PhoneBook(void) {
/* 	for (int i = 0; i < 8; i++) {
		this->_contacts[i] = Contact(NULL, NULL, NULL, NULL, NULL);
	} */
}

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

void PhoneBook::getPhoneBookContact(void){
	// imprime todos los registros con 4 campos separados por pipes
	for (int contactId = 0; contactId < 8; ++contactId)
		std::cout	<< contactId + 1
				<< " | "
				<< this->_contacts[contactId].getFirstName()
				<< " | "
				<< this->_contacts[contactId].getLastName()
				<< " | "
				<< this->_contacts[contactId].getNickName()
				<< std::endl;
}

/*
* std::atoi(id.c_str()) convierte la cadena id a un número entero. 
* id.c_str() se utiliza para obtener un puntero a una matriz de 
* caracteres que representa la cadena, ya que std::atoi espera un 
* argumento de tipo const char*
*/
void PhoneBook::getPhoneBookContact(std::string id) {
	int	contactId;

	contactId = std::atoi(id.c_str());
	if (contactId <= 8 && contactId >= 1) {
		std::cout	<< contactId
					<< " | "
					<< this->_contacts[contactId - 1].getFirstName()
					<< " | "
					<< this->_contacts[contactId - 1].getLastName()
					<< " | "
					<< this->_contacts[contactId - 1].getNickName()
					<< std::endl;
	}
	else
		std::cout << "Invalid option";
}
