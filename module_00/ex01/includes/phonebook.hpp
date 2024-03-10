/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roruiz-v <roruiz-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:17:01 by roruiz-v          #+#    #+#             */
/*   Updated: 2024/03/10 22:59:00 by roruiz-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
/* <iomanip> IO Manipulators:
	setiosflags		Set format flags (function)
	resetiosflags	Reset format flags (function)
	setbase	Set 	basefield flag (function)
	setfill	Set 	fill character (function)
	setprecision	Set decimal precision (function)
	setw			Set field width (function)
	get_money		Get monetary value (function)
	put_money		Put monetary value (function)
	get_time		Get date and time (function)
	put_time		Put date and time (function)
*/

# include <string> // string class -> strings are objects that represent sequences of chars

/*
	NAMES CONVENTION:
	1. Variables members of a class: camelCase
	2. Parameters: camelCase (but other word to avoid confuse)
*/

class	PhoneBook {
	
	private:
		
	public:
		PhoneBook(void);
		~PhoneBook(void);
		
};

#endif