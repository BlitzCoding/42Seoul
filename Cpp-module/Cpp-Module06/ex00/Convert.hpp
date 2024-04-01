/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:16:49 by iyonghun          #+#    #+#             */
/*   Updated: 2023/02/14 17:07:37 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <iomanip>
#include <string>

#define CHAR 1
#define FLOAT 2
#define DOUBLE 3
#define INT 4
#define INVALID 5
#define PSEUDO 6

class Convert
{
private:
    int i_arg;
    float f_arg;
    char c_arg;
    double d_arg;
    
    std::string def;

    int type;
    bool isWrong;

public:
    Convert();

    Convert(const std::string &def);

    Convert(const Convert &convert);
    ~Convert();
    Convert &operator=(const Convert &rhs);

    void detect_type(char *arg);
    void convert_data();
    void print_data();
    void getIArg() const;
    void getFArg() const;
    void getCArg() const;
    void getDArg() const;
    int getType() const;
    void setType(int type);

    const std::string &getDef() const;

    void setDef(const std::string &def);
};
bool isLiteral(std::string str);
std::string convertLiteralToDouble(std::string str);
#endif