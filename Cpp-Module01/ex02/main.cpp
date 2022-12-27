/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 11:45:58 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/27 13:48:14 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "&string address:    " << &str << '\n';
    std::cout << "stringPTR address:  " << stringPTR << '\n';
    std::cout << "&stringREF address: " << &stringREF << '\n';
    
    std::cout << "string:       " << str << '\n';
    std::cout << "*stringPTR:   " << *stringPTR << '\n';
    std::cout << "stringREF:    " << stringREF << '\n';
}