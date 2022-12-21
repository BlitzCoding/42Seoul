/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 08:58:25 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/21 13:50:46 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook phoneBook;
    std::string cmd;

    while (cmd != "EXIT")
    {
        std::cout << "\n *** Write Your Command (ADD, SEARCH, EXIT) *** \n";
        std::cin >> cmd;
        if (cmd == "ADD")
        {
            contact.AddContact();
        }
        else if (cmd == "SEARCH")
        {

        }
        else if (cmd == "EXIT")
        {
            continue;
        }
        else
        {
            std::cout << "Unvalid Command\n";
        }
    }
    return 0;
}