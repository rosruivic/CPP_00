/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roruiz-v <roruiz-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:24:44 by roruiz-v          #+#    #+#             */
/*   Updated: 2024/03/10 16:36:43 by roruiz-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

/*	CONSTRUCTOR: only used one time, to init the values at the creation of 
	the object (instance) */
Contact::Contact(std::string firstNm,
				std::string lastNm,
				std::string nickNm,
				std::string phoneNum,
				std::string darkScrt) {
	this->firstName = firstNm;
	this->lastName = lastNm;
	this->nickName = nickNm;
	this->phoneNumber = phoneNum;
	this->darkestSecret = darkScrt;
}

/*	DESTRUCTOR: not necessary at this exercise because is forbidden to use
	dinamyc memorie ('new')  */
Contact::~Contact(void) {
	
}

/*  SETTER: to change the values after the creation of the object (instance)  */
void Contact::setContact(std::string firstNm,
				std::string lastNm,
				std::string nickNm,
				std::string phoneNum,
				std::string darkScrt) {
	this->firstName = firstNm;
	this->lastName = lastNm;
	this->nickName = nickNm;
	this->phoneNumber = phoneNum;
	this->darkestSecret = darkScrt;
}

/*  GETTER: to access to the values of an instance of the class */
void Contact::getContact(int id) {
	
}
