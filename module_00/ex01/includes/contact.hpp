/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roruiz-v <roruiz-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:53:51 by roruiz-v          #+#    #+#             */
/*   Updated: 2024/04/10 17:55:01 by roruiz-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>
# include <string>

/*
	NAMES CONVENTION:
	1. Variables members of a class: camelCase
	2. Parameters: camelCase (but other word to avoid confuse)
*/

class	Contact {
	
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
		
	public:
		Contact(std::string firstNm,
				std::string lastNm,
				std::string nickNm,
				std::string phoneNum,
				std::string darkScrt);
				
		~Contact(void); // innecesario al no tener mem dinámica

		// method setter to fill the content into the properties of the class instance
		void setContact(std::string firstNm,
						std::string lastNm,
						std::string nickNm,
						std::string phoneNum,
						std::string darkScrt);

		// method getter to access to the content of the properties of the class instance
		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhoneNum();
		std::string getDarkSecret();
		
		void setFirstName(std::string firstNm);
		void setLastName(std::string lastNm);
		void setNickName(std::string nickNm);
		void setPhoneNum(std::string phoneNum);
		void setDarkestSecret(std::string darkScrt);

		// method to show by screen the content of the properties of the class instance

};

#endif
