/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roruiz-v <roruiz-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:53:51 by roruiz-v          #+#    #+#             */
/*   Updated: 2024/04/25 13:17:01 by roruiz-v         ###   ########.fr       */
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

	An explicit destructor is needed when dinamic memory is used
	(here that's not the case)
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
				
		~Contact(void);

		// setters methods:
		void setFirstName(std::string firstNm);
		void setLastName(std::string lastNm);
		void setNickName(std::string nickNm);
		void setPhoneNum(std::string phoneNum);
		void setDarkestSecret(std::string darkScrt);
		
		// getters methods:
		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhoneNum();
		std::string getDarkestSecret();

};

#endif
