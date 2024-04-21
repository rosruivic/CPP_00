/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roruiz-v <roruiz-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:53:51 by roruiz-v          #+#    #+#             */
/*   Updated: 2024/04/21 23:46:03 by roruiz-v         ###   ########.fr       */
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
		Contact();
		Contact(std::string firstNm,
				std::string lastNm,
				std::string nickNm,
				std::string phoneNum,
				std::string darkScrt);
				
		~Contact(void); // innecesario al no tener mem dinámica

		// methods setters to add one instance of the class
		void setFirstName(std::string firstNm);
		void setLastName(std::string lastNm);
		void setNickName(std::string nickNm);
		void setPhoneNum(std::string phoneNum);
		void setDarkestSecret(std::string darkScrt);
		
		// methods getters to read the content of one instance
		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhoneNum();
		std::string getDarkestSecret();
		

		// method to show by screen the content of the properties of the class instance

};

#endif
