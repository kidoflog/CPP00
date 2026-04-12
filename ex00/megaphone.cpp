/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 17:04:50 by kkido             #+#    #+#             */
/*   Updated: 2026/04/12 17:05:13 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char *argv[])
{

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int arg_i = 1; argv[arg_i]; arg_i++)
	{
		for (int i = 0; argv[arg_i][i]; i++)
		{
			std::cout << (char)std::toupper(argv[arg_i][i]);
		}
	}
	std::cout << std::endl;
	return 0;
}
