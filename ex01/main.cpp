/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 17:31:14 by kkido             #+#    #+#             */
/*   Updated: 2026/04/26 16:14:28 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main(void)
{
	std::string cmd;
	std::cout << "---Open phone book---\n" << std::endl;
	while(1){
	std::cout << "Command:\n- ADD\n- SEARCH\n- EXIT" << std::endl;
	std::cin >> cmd;
	if(cmd == "ADD"){

	}
	else if(cmd == "SEARCH"){

	}
	else if(cmd == "EXIT"){

	}
	else{
		std::cout << "Error:invalid command." << std::endl;
	}
	}
}
