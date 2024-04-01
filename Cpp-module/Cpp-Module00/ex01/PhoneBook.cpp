/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:51:39 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/27 10:15:21 by yonghlee         ###   ########.fr       */
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

void    setContact(std::string &_name)
{
    while (getline(std::cin, _name))
    {
        if (!_name.empty() && !std::cin.eof())
        {
            return ;
        }
    }
    std::cout << "EOF\n";
    exit(0);
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
    setContact(firstName);
    temp.setFirstName(firstName);
    std::cout << "Input Last Name : ";
    setContact(lastName);
    temp.setLastName(lastName);
    std::cout << "Input NickName : ";
    setContact(nickName);
    temp.setNickName(nickName);
    std::cout << "Input phoneNumber Name : ";
    setContact(phoneNumber);
    temp.setPhoneNumber(phoneNumber);
    std::cout << "Input Secret : ";
    setContact(darkestSecret);
    temp.setDarkestSecret(darkestSecret);
    
    this->contacts[index] = temp;
}

void PhoneBook::searchTable(int size)
{
    printTable("Index");
    printTable("First Name");
    printTable("Last Name");
    printTable("NickName");
    std::cout << '\n';
    if (size > 8)
        size = 8;
    for (int i = 0; i < size; i++)
    {
        printTable(std::to_string(i + 1));
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
    printTable(this->contacts[index - 1].getDarkestSecret());
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