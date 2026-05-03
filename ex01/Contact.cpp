/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:09:14 by kkido             #+#    #+#             */
/*   Updated: 2026/05/03 15:16:06 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>




void Contact::set_info(const std::string str, e_info_kind info){
	if(info == FIRST_NAME)
		first_name = str;
	else if(info == LAST_NAME)
		last_name = str;
	else if(info == NICK_NAME)
		nick_name = str;
	else if(info == PHONE_NUMBER)
		phone_number = str;
	else if(info == DARKEST_SECRET)
		darkest_secret = str;
}

void Contact::display_names(int index){
	std::cout << std::setw(10) << index << "|"<<std::flush;
	display_name_set_width(first_name);
	display_name_set_width(last_name);
	display_name_set_width(nick_name);
	std::cout << std::endl;
}

void Contact::display_name_set_width(std::string str){
	std::string tmp_str;

	if(str.length() <= 10)
		std::cout << std::setw(10) << str << "|" << std::flush;
	else{
		tmp_str = str.substr(0 , 9) + ".";
		std::cout << std::setw(10) << tmp_str << "|" << std::flush;
	}
}

void Contact::display_info(){
	std::cout << "\n    First name: " << first_name << std::endl;
	std::cout << "     Last name: " << last_name << std::endl;
	std::cout << "     Nick name: " << nick_name << std::endl;
	std::cout << "  Phone number: " << phone_number << std::endl;
	std::cout << "Darkset secret: " << darkest_secret << "\n" << std::endl;
}
