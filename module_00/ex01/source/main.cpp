/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roruiz-v <roruiz-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:22:24 by roruiz-v          #+#    #+#             */
/*   Updated: 2024/03/10 22:56:23 by roruiz-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

static void	ft_welcome(void)
{
	std::cout << std::endl << "---------------------------------------";
	std::cout << std::endl << "  This is your Awesome PhoneBook !!!";
	std::cout << std::endl << "---------------------------------------" << std::endl;
	std::cout << std::endl << " Please, write your option in UPPERs :" << std::endl;
	std::cout << std::endl << "---------------------------------------" << std::endl;
	std::cout << "   ADD    -> to add a new contact to your Phone Book." << std::endl;
	std::cout << "   SEARCH -> to search and display an existent contact on your Phone Book." << std::endl;
	std::cout << "   EXIT   -> to finish your session and exit the program." << std::endl;
	std::cout << std::endl << std::endl;
}

int	main(void)
{
	std::string	option;		// se acabó el tipo 'char *', ahora se declaran así
	PhoneBook	ph_book;	// esto llama al constructor
	
	ft_welcome();
	while (1)
	{
	//	std::cin >> option; 			// solo lee hasta el primer espacio
		std::getline(std::cin, option); // para que lea todo lo que se escriba
		std::cout << std::endl;
		if (option == "EXIT")
			break;
		else if (option == "ADD")
			// llamar al método ADD
			;
		else if (option == "SEARCH")
			// llamar al método SEARCH
			;
	}
	return (0);	
}

