/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roruiz-v <roruiz-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:22:24 by roruiz-v          #+#    #+#             */
/*   Updated: 2024/04/22 00:47:39 by roruiz-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

/*
	Resulta que usar la llamada al sistema se considera poco seguro, pero en 
	este caso, que tenemos la certeza de estar trabajando en un entorno privado
	y no va a haber problemas, podemos usarlo.
	El problema de usar la versión segura con el bucle 'for' es que, tras
	escribir 100 líneas en blanco, estaríamos viendo el siguiente mensaje
	abajo en la ventana (creo, probarlo no obstante)
*/
void	ftClearScreen () {
	for (int i = 0; i < 100; ++i) {
		std::cout << std::endl;
	}
//	system("clear");
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
    std::cout << std::setw(40) << std::setfill('-') << "-" << std::endl << std::endl;
	std::cout << std::setw(40) << std::setfill('-') << "  This is your Awesome PhoneBook !!!" << std::endl << std::endl;
    std::cout << std::setw(40) << std::setfill('-') << "-" << std::endl << std::endl;
	std::cout << std::endl << " Please, write your option :" << std::endl;
    std::cout << std::setw(40) << std::setfill('-') << "-" << std::endl;
	std::cout << "   ADD    -> to add a new contact to your Phone Book." << std::endl;
	std::cout << "   SEARCH -> to search and display an existent contact on your Phone Book." << std::endl;
	std::cout << "   EXIT   -> to finish your session and exit the program." << std::endl;
	std::cout << std::endl << std::endl;
	std::cout << "Your selection: ";
}

/*
* En este código, std::numeric_limits<std::streamsize>::max() devuelve el máximo 
* número de caracteres que puede contener un objeto de tipo std::streamsize, 
* y '\n' es el carácter de nueva línea. 
* Entonces, std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n') 
* ignora el máximo número de caracteres hasta que se encuentra un carácter 
* de nueva línea, lo que efectivamente ignora el carácter de nueva línea 
* introducido cuando se presiona Enter.
*
* ********* ESTANDAR C++ 98: **********
* En este código, std::cin >> s; lee la entrada del usuario en la cadena s. 
* Si s está vacío (es decir, el usuario simplemente presionó Enter sin 
* introducir ningún carácter), entonces std::cin.ignore(1000, '\n'); ignora 
* hasta 1000 caracteres o hasta que se encuentra un carácter de nueva línea, 
* lo que efectivamente evita que se haga un salto de línea.
*
* ****  NO WAY *****
*/
std::string ftCaptureString(void){
	std::string s;
	char		c;
	
//	while (std::getline(std::cin, s))
	while (std::cin.get(c))
	{
		if (c == '\n' && !s.empty())
			break;
		else if (c != '\n')
			s += c;
	//	else
	//		std::cin.ignore(1000, '\n');
	//		std::cout << '\b' << ' ' << '\b';
	}
	return (s);
}

void	ftObtainData(std::string s1,
							std::string s2, 
							std::string s3,
							std::string s4, 
							std::string s5) {
								
	std::cout << "First Name:      ";
	s1 = ftCaptureString();
	std::cout << "Last Name:       ";
	s2 = ftCaptureString();
	std::cout << "Nick Name:       ";
	s3 = ftCaptureString();
	std::cout << "Phone Number:    ";
	s4 = ftCaptureString();
	std::cout << "Dark Secret:     ";
	s5 = ftCaptureString();
	
}

/*
	Se podría usar la expresión 'std::cin >> option;' // solo lee hasta el primer espacio
	pero 'std::getline(std::cin, option);' // lee todo lo que se escriba (no solo la primera palabra)
*/
int	main(void)
{
	std::string	option;		// en lugar de tipo 'char *', los strings se declaran así
	std::string s1, s2, s3, s4, s5;
	PhoneBook	ph_book;	// declarar una variable de tipo clase llama a su constructor

	ftWelcome();
	while (std::getline(std::cin, option))
	{
		if (option == "EXIT" || option == "exit")
			break;
		else if (option == "ADD" || option == "add"){
			ftObtainData(s1, s2, s3, s4, s5);
			ph_book.setPhoneBookContact(s1, s2, s3, s4, s5);
		}
		else if (option == "SEARCH" || option == "search") {
			ph_book.getPhoneBookContact();
			std::cout << "   * Which contact want you see? ";
			ph_book.getPhoneBookContact(ftCaptureString());
		}
		ftWelcome();
	}
	return (0);	
}

