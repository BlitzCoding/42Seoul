/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:39:06 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/21 13:39:13 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    
}

Contact::~Contact()
{
    std::cout << "Success Destructor\n";
}

void    Contact::setFirstName(std::string firstName)
{
    this->firstName = firstName;
}

void    Contact::setLastName(std::string lastName)
{
    this->lastName = lastName;
}

void    Contact::setNickName(std::string nickname)
{
    this->nickName = nickname;
}

void    Contact::setPhoneNumber(std::string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void    Contact::setDarkestSecret(std::string darkestSecret)
{
    this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName(void) const
{
    return (this->firstName);
}

std::string Contact::getLastName(void) const
{
    return (this->lastName);
}

std::string Contact::getNickName(void) const
{
    return (this->nickName);
}

std::string Contact::getPhoneNumber(void) const
{
    return (this->phoneNumber);
}
std::string Contact::getDarkestSecret(void) const
{
    return (this->darkestSecret);
}