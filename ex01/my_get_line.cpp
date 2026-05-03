/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_get_line.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 19:27:41 by kkido             #+#    #+#             */
/*   Updated: 2026/05/03 19:37:39 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_get_line.hpp"

std::string my_get_line(){
	std::string stdin;
	if(!std::getline(std::cin, stdin))
		exit(0);
	else
		return stdin;
}
