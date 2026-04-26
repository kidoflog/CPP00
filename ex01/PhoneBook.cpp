/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:09:22 by kkido             #+#    #+#             */
/*   Updated: 2026/04/26 19:56:24 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _count(0){
}

void PhoneBook::add_contact(){
	int index;
	std::string info;
	Contact tmp_c;

	index = _count % 8;

	std::cout << "\nPlease input first name: "<<std::flush;
	std::getline(std::cin, info);
	tmp_c.set_info(info, Contact::FIRST_NAME);
	std::cout << "Please input last name: "<<std::flush;
	std::getline(std::cin, info);
	tmp_c.set_info(info, Contact::LAST_NAME);
	std::cout << "Please input nick name: "<<std::flush;
	std::getline(std::cin, info);
	tmp_c.set_info(info, Contact::NICK_NAME);
	std::cout << "Please input phone number: "<<std::flush;
	std::getline(std::cin, info);
	tmp_c.set_info(info, Contact::PHONE_NUMBER);
	std::cout << "Please input darkest secret: "<<std::flush;
	std::getline(std::cin, info);
	tmp_c.set_info(info, Contact::DARKEST_SECRET);

	std::cout << "Add contact completed!\n" << std::endl;

	contact[index] =  tmp_c;
	_count++;
}

void PhoneBook::search_contact(){
	if(_count == 0){
		std::cout << "Error: Contact is not exist.\n" << std::endl;
		return;
	}
	display_contact();
}


void PhoneBook::display_contact(){
	for(int i = 0; i < _count && i < 8; i++)
		contact[i].display_name(i);
}
