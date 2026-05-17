/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 19:34:41 by kkido             #+#    #+#             */
/*   Updated: 2026/05/17 13:26:03 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNC_HPP
#define FUNC_HPP
#include <string>
#include <iostream>
#include <stdlib.h>

enum e_check_num{
	IS_NUM,
	IS_NOT_NUM
};

std::string my_get_line();
bool is_valid_input(const std::string str,e_check_num is_num);

#endif
