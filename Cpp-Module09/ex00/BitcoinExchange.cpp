#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &bitcoin)
{
	*this = bitcoin;
}

BitcoinExchange::~BitcoinExchange()
{
    std::cout << " ===== BitcoinExchange Destroy ====== " << std::endl;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &bitcoin)
{
    (void) bitcoin;
	return (*this);
}

bool check_value(float rate)
{
    if (rate <= 0)
    {
        std::cerr << "Error: not a positive number." << std::endl;
        return false;
    }
    if (rate >= 1000)
    {
        std::cerr << "Error: too large a number." << std::endl;
        return false;
    }
    return true;
}

bool check_date(int month, int day)
{
    if ((month < 1 && month > 12) || (day < 1 && day > 31))
    {
        std::cerr << "Error: Date Format Error" << std::endl;
        return false;
    }
    return true;
}

void BitcoinExchange::openDatabase()
{
    std::ifstream       file;
    std::string         readline;
    float               rate = 0.00;
    
    file.open("./data.csv");
    if (file.fail())
    {
        std::cerr << "Error: file isn't exist" << std::endl;
        file.close();
        exit(1);
    }
    while (!file.eof())
    {
        file >> readline;
        std::string date = readline.substr(0, 10);

        std::stringstream   rateline;
        rateline << readline.substr(11);
        rateline >> rate;
        // std::cout << rate << '\n';
        database.insert(make_pair(date, rate));
    }
    file.close();
}

void BitcoinExchange::solve(int year, int month, int day, float rate)
{
    std::stringstream   ss;
    bool                check = false;

    ss << std::setw(4) << std::setfill('0') << year << "-";
    ss << std::setw(2) << std::setfill('0') << month << "-";;
    ss << std::setw(2) << std::setfill('0') << day;
    std::string date = ss.str();

    std::map<std::string, float>::iterator iter = database.begin();
    for (iter = database.begin(); iter != database.end(); iter++)
    {
        if (iter->first == date)
        {
            check = true;
            break;
        }
    }

    if (check)
    {
        std::cout << date << " => " << rate << " = " << rate * iter->second << '\n';
    }
    else
    {
       std::map<std::string, float>::iterator tmp = database.lower_bound(date);
       tmp = std::prev(tmp);
       std::cout << date << " => " << rate << " = " << rate * tmp->second << '\n';
    }

}

void BitcoinExchange::readDatabase(char* argv)
{
    std::string     file = std::string(argv);
    std::string     line;
    std::ifstream   input;
    long            year;
    int             month;
    int             day;

    input.open(file);
    if (input.fail())
    {
        std::cerr << "Error: Input File Open Fail" << std::endl;
        input.close();    
        exit(1);
    }

    std::getline(input, line);
    while (!input.eof())
    {
        std::string         date;
        std::stringstream   value_rate;
        std::string         value;
        float               rate = 0.00;
        
        std::getline(input, line);
        if (line.length() < 14)
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        year = std::atoi(line.substr(0, 4).c_str());
        month = std::atoi(line.substr(5, 2).c_str());
        day = std::atoi(line.substr(8,2).c_str());
        value = line.substr(13);
        
        value_rate << value;
        value_rate >> rate;
        if (!check_value(rate) || !check_date(month, day))
            continue;
        solve(year, month, day, rate);
    }
}