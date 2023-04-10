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

bool is_dash(char c) {
    return c == '-';
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
        date.erase(std::remove_if(date.begin(), date.end(), is_dash), date.end());

        std::stringstream   rateline;
        rateline << readline.substr(11);
        rateline >> rate;
        // std::cout << rate << '\n';
        database.insert(make_pair(date, rate));
    }
    file.close();
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
        if (!check_value(rate))
            continue;
        std::cout << rate << '\n';
       
    }
}