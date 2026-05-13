/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:09:22 by kkido             #+#    #+#             */
/*   Updated: 2026/05/13 20:38:00 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"
#include <stdlib.h>
#include <sstream>

PhoneBook::PhoneBook() : _count(0){
}

void PhoneBook::add_contact(){
	int index;
	std::string info;
	Contact tmp_c;

	index = _count % 8;
	while(1){
		std::cout << "\nPlease enter first name: "<<std::flush;
		info = my_get_line();
		if(is_valid_str(info))
			break;
		std::cout << "Error: Field must be valid str."<<std::flush;
	}
	tmp_c.set_info(info, Contact::FIRST_NAME);
	while(1){
		std::cout << "\nPlease enter last name: "<<std::flush;
		info = my_get_line();
		if(is_valid_str(info))
			break;
		std::cout << "Error: Field must be valid str."<<std::flush;
	}
	tmp_c.set_info(info, Contact::LAST_NAME);
	while(1){
		std::cout << "\nPlease enter nick name: "<<std::flush;
		info = my_get_line();
		if(is_valid_str(info))
			break;
		std::cout << "Error: Field must be valid str."<<std::flush;
	}
	tmp_c.set_info(info, Contact::NICK_NAME);
	while(1){
		std::cout << "\nPlease phone number: "<<std::flush;
		info = my_get_line();
		if(is_valid_str(info))
			break;
		std::cout << "Error: Field must be valid str."<<std::flush;
	}
	tmp_c.set_info(info, Contact::PHONE_NUMBER);
	while(1){
		std::cout << "\nPlease darkest secret: "<<std::flush;
		info = my_get_line();
		if(is_valid_str(info))
			break;
		std::cout << "Error: Field must be valid str."<<std::flush;
	}
	tmp_c.set_info(info, Contact::DARKEST_SECRET);

	std::cout << "Add contact completed!\n" << std::endl;

	contact[index] =  tmp_c;
	if(_count == 15)
		_count = 8;
	else
		_count++;
}

void PhoneBook::search_contact(){
	std::string input;
	int index;

	if(_count == 0){
		std::cout << "Error: Contact does not exist.\n" << std::endl;
		return;
	}
	display_contact();
	std::cout << "Please enter index to display:" << std::flush;
	input = my_get_line();
	std::stringstream ss(input);
	if(!(ss >> index)||index + 1 > _count ||( index < 0 || index > 7)){
		std::cout << "Error: Contact does not exist.\n" << std::endl;
		return;
	}
	contact[index].display_info();
}


void PhoneBook::display_contact(){
	std::cout << "\n-----Open contacts index page-----" <<std::endl;
	std::cout << "     Index|First name| Last name| Nick name|" << std::endl;
	for(int i = 0; i < _count && i < 8; i++)
		contact[i].display_names(i);
}
