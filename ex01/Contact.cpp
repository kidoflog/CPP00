/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:09:14 by kkido             #+#    #+#             */
/*   Updated: 2026/04/26 19:39:09 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"




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

void Contact::display_name(int index){

}
