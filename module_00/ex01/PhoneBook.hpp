/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roruiz-v <roruiz-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:17:01 by roruiz-v          #+#    #+#             */
/*   Updated: 2024/04/24 15:06:39 by roruiz-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <cstdlib> // cstdlib es parte de la biblioteca estándar de C++ y está disponible en C++98. Esta biblioteca proporciona las funciones de la biblioteca estándar de C para la conversión de números, generación de números aleatorios, gestión de la memoria, búsqueda y ordenación. La función std::atoi que estás utilizando es parte de esta biblioteca.
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

// string class -> strings are objects that represent sequences of chars
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
								
		bool getPhoneBookContact(void); // returns 1 if no contacts, 0 otherwise
		
		void getPhoneBookContact(std::string id);

		void printTruncated(std::string str);
		
};

#endif