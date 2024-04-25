/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roruiz-v <roruiz-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:17:01 by roruiz-v          #+#    #+#             */
/*   Updated: 2024/04/25 13:19:39 by roruiz-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <cstdlib>
/* cstdlib is part of the C++ standard library; it's available for C++98.
 * It gets the standard C functions for numbers convertions, random numbers management,
 * memory management, seeking and ordenation.
 * ---> The function 'std::atoi' belongs to this library.
*/
# include <iomanip>
/* <iomanip> IO Manipulators:
	setiosflags		Set format flags (function)
	resetiosflags	Reset format flags (function)
	setbase	Set 	basefield flag (function)
	setfill	Set 	fill character (function)
	setprecision	Set decimal precision (function)
	setw			Set field width (function) // establece ancho del campo
	get_money		Get monetary value (function)
	put_money		Put monetary value (function)
	get_time		Get date and time (function)
	put_time		Put date and time (function)
*/

// string class -> strings are objects (with methods) that represent sequences of chars
# include <string>

// the class Contact must be included here to be used into PhoneBook
# include "Contact.hpp"

/*
	NAMES CONVENTION:
	1. Variables members of a class: camelCase
	2. Parameters: camelCase (but other word to avoid confuse)
*/

class	PhoneBook {
	
	private:
		Contact	_contacts[8];
		
	public:
		PhoneBook(void);
		~PhoneBook(void);
		
		void setPhoneBookContact(std::string firstNm,
								std::string lastNm,
								std::string nickNm,
								std::string phoneNum,
								std::string darkScrt);
								
		bool getPhoneBookContact(void);
		
		void getPhoneBookContact(std::string id);

		void printTruncated(std::string str);
		
};

#endif