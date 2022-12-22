/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:51:39 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/21 14:04:25 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	printTable(std::string str)
{
	int len;
	
    len = str.size();
    if (len <= 10)
    {
        std::cout << std::setw(10);
        std::cout << str;
        std::cout << '|';
    }
    else
    {
        std::cout << std::setw(9);
        std::cout << str.substr(0, 9);
        std::cout << '.';
        std::cout << '|';
    }
}

PhoneBook::PhoneBook()
{

}

PhoneBook::~PhoneBook()
{

}

void PhoneBook::addTable(int index)
{
    Contact     temp;
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

    std::cin.ignore();
    std::cout << "Input First Name : ";
    std::getline(std::cin, firstName);
    temp.setFirstName(firstName);
    std::cout << "Input Last Name : ";
    std::getline(std::cin, lastName);
    temp.setLastName(lastName);
    std::cout << "Input NickName : ";
    std::getline(std::cin, nickName);
    temp.setNickName(nickName);
    std::cout << "Input phoneNumber Name : ";
    std::getline(std::cin, phoneNumber);
    temp.setPhoneNumber(phoneNumber);
    std::cout << "Input Secret : ";
    std::getline(std::cin, darkestSecret);
    temp.setDarkestSecret(darkestSecret);
    
    this->contacts[index] = temp;
}

void PhoneBook::searchTable(int size)
{
    printTable("First Name");
    printTable("Last Name");
    printTable("NickName");
    printTable("Phone");
    std::cout << '\n';
    for (int i = 0; i < size; i++)
    {
        printTable(this->contacts[i].getFirstName());
        printTable(this->contacts[i].getLastName());
        printTable(this->contacts[i].getNickName());
        printTable(this->contacts[i].getPhoneNumber());
        std::cout << '\n';
    }
}

void PhoneBook::searchResult(int index)
{
    printTable(this->contacts[index - 1].getFirstName());
    printTable(this->contacts[index - 1].getLastName());
    printTable(this->contacts[index - 1].getNickName());
    printTable(this->contacts[index - 1].getPhoneNumber());
}

// void PhoneBook::test(int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         std::cout << contacts[i].getFirstName() << " , ";
//         std::cout << contacts[i].getLastName() << " , ";
//         std::cout << contacts[i].getNickName() << " , ";
//         std::cout << contacts[i].getPhoneNumber() << " , ";
//         std::cout << contacts[i].getDarkestSecret() << '|';    
//     }
// }