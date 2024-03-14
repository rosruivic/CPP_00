/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roruiz-v <roruiz-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:22:24 by roruiz-v          #+#    #+#             */
/*   Updated: 2024/03/14 13:50:14 by roruiz-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

/*
	Resulta que usar la llamada al sistema se considera poco seguro, pero en 
	este caso, que tenemos la certeza de estar trabajando en un entorno privado
	y no va a haber problemas, podemos usarlo.
	El problema de usar la versión segura con el bucle 'for' es que, tras
	escribir 100 líneas en blanco, estaríamos viendo el siguiente mensaje
	abajo en la ventana (creo, probarlo no obstante)
*/
static void	ft_clearScreen () {
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
static void	ft_welcome(void)
{
	ft_clearScreen();
    std::cout << std::setw(25) << std::setfill('-') << std::endl;
	std::cout << std::endl << "  This is your Awesome PhoneBook !!!";
    std::cout << std::setw(25) << std::setfill('-') << std::endl;
	std::cout << std::endl << " Please, write your option in UPPERs :" << std::endl;
    std::cout << std::setw(25) << std::setfill('-') << std::endl;
	std::cout << "   ADD    -> to add a new contact to your Phone Book." << std::endl;
	std::cout << "   SEARCH -> to search and display an existent contact on your Phone Book." << std::endl;
	std::cout << "   EXIT   -> to finish your session and exit the program." << std::endl;
	std::cout << std::endl << std::endl;
}

/*
	Se podría usar la expresión 'std::cin >> option;' // solo lee hasta el primer espacio
	pero 'std::getline(std::cin, option);' // lee todo lo que se escriba (no solo la primera palabra)
*/
int	main(void)
{
	std::string	option;		// se acabó el tipo 'char *', ahora se declaran así
	PhoneBook	ph_book;	// esto llama al constructor
	
	ft_welcome();
	while (1)
	{
		std::getline(std::cin, option);
		std::cout << std::endl;
		if (option == "EXIT" || option == "exit")
			break;
		else if (option == "ADD" || option == "add")
			// llamar al método ADD
			;
		else if (option == "SEARCH" || option == "search")
			// llamar al método SEARCH
			;
	}
	return (0);	
}

