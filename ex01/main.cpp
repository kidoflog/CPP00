/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 17:31:14 by kkido             #+#    #+#             */
/*   Updated: 2026/05/03 19:40:28 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string cmd;
	std::cout << "-----Open phone book-----\n" << std::endl;
	while(1){
	std::cout << "Please input command:\n- ADD\n- SEARCH\n- EXIT\n" << std::endl;
	cmd = my_get_line();
	if(cmd == "ADD"){
		phonebook.add_contact();
	}
	else if(cmd == "SEARCH"){
		phonebook.search_contact();
	}
	else if(cmd == "EXIT"){
		std::cout << "-----Close phone book-----" << std::endl;
		exit(0);
	}
	else{
		std::cout << "Error:invalid command.\n" << std::endl;
	}
	}
}
