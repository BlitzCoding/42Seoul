/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 08:58:25 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/26 11:33:41 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook   phoneBook;
    std::string cmd;
    std::string search_index;
    int         index;
    bool        flag;

    index = 0;
    while (cmd != "EXIT")
    {
        flag = true;
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
            std::cin.ignore();
            std::getline(std::cin, search_index);
            for (unsigned long i = 0; i < search_index.length(); i++)
            {
                if (isdigit(search_index[i]) == 0)
                {
                    std::cout << "Worng Index\n";
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                if (stoi(search_index) > 0 && stoi(search_index) <= index)
                    phoneBook.searchResult(stoi(search_index));
                else
                {
                    std::cout << "Worng Index\n";
                    continue;
                }
            }
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