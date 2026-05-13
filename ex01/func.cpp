/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 19:27:41 by kkido             #+#    #+#             */
/*   Updated: 2026/05/13 20:30:09 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.hpp"

std::string my_get_line(){
	std::string stdin;
	if(!std::getline(std::cin, stdin))
		exit(0);
	else
		return stdin;
}

bool is_valid_str(const std::string str){
	if(str.empty())
		return false;
	std::string::size_type length = str.length();
	for(std::string::size_type i = 0;i < length; ++i){
		unsigned char c = static_cast<unsigned char>(str[i]);
		if(!std::isprint(c)||std::isspace(c))
			return false;
	}
	return true;
}
