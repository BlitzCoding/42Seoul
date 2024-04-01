#ifndef BITCOINEXCHANGE_H
#define BITCOINEXCHANGE_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <utility>
#include <string>
#include <map>
#include <cstdlib>

class BitcoinExchange
{
    private:
        std::map<std::string, float> database;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &bitcoin);
        ~BitcoinExchange();
        BitcoinExchange& operator=(const BitcoinExchange &bitcoin);

        void    openDatabase();
        void    readDatabase(char* argv);
        void    solve(int year, int month, int day, float rate);
};

#endif