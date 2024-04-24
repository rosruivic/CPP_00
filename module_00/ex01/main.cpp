/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roruiz-v <roruiz-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:22:24 by roruiz-v          #+#    #+#             */
/*   Updated: 2024/04/25 00:34:51 by roruiz-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

/*
	A system call is consider low-safe. 
	In this case, we have the certain of working over a private environment
	so this, there won't be problems, we can use it.
	Although, we could use a safe-versión with the following for bucle.
	In this case, we can't fix the down-view of the info into the window.
	
	 	for (int i = 0; i < 100; ++i) {
			std::cout << std::endl;
		}
*/
void	ftClearScreen () {
	system("clear");
}

/*
	<iomanip>:
		setw -> establece el ancho del campo para la sig operación de inserción
		setfill -> establece el carácter de relleno para operaciones de inserción
	en el ejemplo:
		std::cout << std::setw(10) << std::setfill('*') << "Hello" << std::endl;
	la salida será '*****Hello', 10 caracteres en total y 5 de relleno al principio
*/
void	ftWelcome(void)
{
	ftClearScreen();
    std::cout << std::setw(40) << std::setfill('-') << "-" << std::endl;
	std::cout << std::setw(40) << std::setfill('-') << "  This is your Awesome PhoneBook !!!" << std::endl;
    std::cout << std::setw(40) << std::setfill('-') << "-" << std::endl << std::endl;
	std::cout << std::endl << " Please, write your option :" << std::endl;
    std::cout << std::setw(40) << std::setfill('-') << "-" << std::endl;
	std::cout << "   ADD    -> add a new contact to your Phone Book." << std::endl;
	std::cout << "   SEARCH -> search and display an existent contact on your Phone Book." << std::endl;
	std::cout << "   EXIT   -> finish your session and exit the program." << std::endl;
	std::cout << std::endl << std::endl;
	std::cout << " -----> Your selection: ";
}

/*
	ASCII > 128 not allowed (to fix the align of the separator pipes)
*/
std::string ftCaptureString(void){
	std::string 	s;
	unsigned char	c;
	bool			asciiOk = true;
	
	while (std::getline(std::cin, s))
	{
		if (!s.empty()) {
			for (unsigned long i = 0; i < s.length(); i++) {
				c = static_cast<unsigned char>(s[i]);
				if (c >= 127) {
					asciiOk = false;
					break ;
				}
			}
			if (asciiOk == true) {
				break;
			}
		}
		asciiOk = true;
	}
	return (s);
}

void	ftObtainNewContact(std::string *s1,
						std::string *s2, 
						std::string *s3,
						std::string *s4, 
						std::string *s5) {
	
	std::cout << " **** WARNING: ascii > 127 are not allowed ****" << std::endl << std::endl;						
	std::cout << "First Name:      ";
	*s1 = ftCaptureString();
	std::cout << "Last Name:       ";
	*s2 = ftCaptureString();
	std::cout << "Nick Name:       ";
	*s3 = ftCaptureString();
	std::cout << "Phone Number:    ";
	*s4 = ftCaptureString();
	std::cout << "Dark Secret:     ";
	*s5 = ftCaptureString();
}

/*
	'std::cin >> option;' // only reads until first space ('r you sure?)
	'std::getline(std::cin, option);' // reads all what is written)
	One 'char *' variable (C) is declared std::string in C++.
	When a variable is class-type declared, that calls to their constructor:
		PhoneBook	phBook;
*/
int	main(void)
{
	std::string	option;
	std::string s1, s2, s3, s4, s5;
	PhoneBook	phBook;

	ftWelcome();
	while (std::getline(std::cin, option))
	{
		if (option == "EXIT" || option == "exit")
			break;
		else if (option == "ADD" || option == "add") {
			ftObtainNewContact(&s1, &s2, &s3, &s4, &s5);
			phBook.setPhoneBookContact(s1, s2, s3, s4, s5);
		}
		else if (option == "SEARCH" || option == "search") {
			if (phBook.getPhoneBookContact()) {
				std::cout << " ----->  Which contact do you want to see? [1..8] :  ";
				phBook.getPhoneBookContact(ftCaptureString());
			}
			else {
				std::cout << "  **** WARNING:   There's not any contact yet !!!" << std::endl;
				std::cout << std::endl << " -------> Please, push ENTER to continue... " ;
				std::cin.get();
			}
		}
		ftWelcome();
	}
	return (0);	
}

