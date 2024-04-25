/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roruiz-v <roruiz-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:24:44 by roruiz-v          #+#    #+#             */
/*   Updated: 2024/04/25 13:26:09 by roruiz-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

/*	CONSTRUCTOR: only used one time, to init the values at the creation of 
	the object (instance) */
Contact::Contact(std::string firstNm,
				std::string lastNm,
				std::string nickNm,
				std::string phoneNum,
				std::string darkScrt) : _firstName (firstNm),
										_lastName (lastNm),
										_nickName (nickNm),
										_phoneNumber (phoneNum),
										_darkestSecret (darkScrt) {
/* 	this->_firstName = firstNm;
	this->_lastName = lastNm;
	this->_nickName = nickNm;
	this->_phoneNumber = phoneNum;
	this->_darkestSecret = darkScrt; */
}

/*	DESTRUCTOR: not necessary at this exercise because is forbidden to use
	dinamyc memorie ('new')  */
Contact::~Contact(void) {}

/* SETTERS */
void Contact::setFirstName(std::string firstNm) {
	this->_firstName = firstNm;
}

void Contact::setLastName(std::string lastNm) {
	this->_lastName = lastNm;
}

void Contact::setNickName(std::string nickNm) {
	this->_nickName = nickNm;
}

void Contact::setPhoneNum(std::string phoneNum) {
	this->_phoneNumber = phoneNum;
}

void Contact::setDarkestSecret(std::string darkScrt) {
	this->_darkestSecret = darkScrt;
}

/*  GETTERS  */
std::string Contact::getFirstName() {
	return (this->_firstName);
}

std::string Contact::getLastName() {
	return (this->_lastName);
}

std::string Contact::getNickName() {
	return (this->_nickName);	
}

std::string Contact::getPhoneNum() {
	return (this->_phoneNumber);	
}

std::string Contact::getDarkestSecret() {
	return (this->_darkestSecret);
}
