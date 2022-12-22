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
    int         search_index;
    int         index;
    int         n;

    index = 0;
    while (cmd != "EXIT")
    {
        std::cout << "\n *** Write Your Command (ADD, SEARCH, EXIT) *** \n";
        std::cin >> cmd;
        if (cmd == "ADD")
        {
            phoneBook.addTable((index++) % 8);
        }
        else if (cmd == "SEARCH")
        {
            phoneBook.searchTable(index);
            std::cout << "Input index : ";
            std::cin >> search_index;
            if (search_index > 0 && search_index <= index)
                phoneBook.searchResult(search_index);
            else
                std::cout << "Worng Index\n";
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