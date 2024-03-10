/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roruiz-v <roruiz-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 21:48:00 by roruiz-v          #+#    #+#             */
/*   Updated: 2024/03/10 22:46:04 by roruiz-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

/* EXPECTED BEHAVIOUR:

	$>./megaphone "shhhhh... I think the students are asleep..."
	SHHHHH... I THINK THE STUDENTS ARE ASLEEP...

	$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF. 

	$>./megaphone
	* LOUD AND UNBEARABLE FEEDBACK NOISE *
	$>

 CAST ADVERTISMENT:
	En C++ también puedes usar el estilo de casting de C, (char)std::toupper(argv[i][j]),
	y esto es válido en C++98. Sin embargo, en C++ se recomienda usar los operadores de 
	casting de estilo C++ como 'static_cast', 'dynamic_cast', 'const_cast' y 'reinterpret_cast'.

	La razón es que los operadores de casting de estilo C++ son más seguros y más fáciles 
	de identificar en el código (por lo tanto, más fáciles de buscar). 
		- 'static_cast' realiza comprobaciones en tiempo de compilación
			para asegurarse de que la conversión es válida, 
		- mientras que el casting de estilo C no realiza estas comprobaciones.
*/
int	main(int argc, char **argv)
{
	int		i, j;

	i = 0;
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (++i < argc)
		{
			j = -1;
			while (argv[i][++j])
				std::cout << static_cast<char>(std::toupper(argv[i][j]));
			if (i != argc - 1)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}
