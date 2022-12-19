/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 08:58:25 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/19 09:12:20 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main()
{
    std::string cmd;

    while (cmd != "EXIT")
    {
        std::cout << "\n *** Write Your Command (ADD, SEARCH, EXIT) *** \n";
        std::cin >> cmd;
        if (cmd == "ADD")
        {

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