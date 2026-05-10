/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 17:04:50 by kkido             #+#    #+#             */
/*   Updated: 2026/05/10 14:36:54 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char *argv[])
{
	int length;
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int arg_i = 1; argv[arg_i]; arg_i++)
	{
		length = std::string(argv[arg_i]).length();
		for (int i = 0; i<length; i++)
		{
			std::cout << (char)std::toupper(argv[arg_i][i]);
		}
	}
	std::cout << std::endl;
	return 0;
}
