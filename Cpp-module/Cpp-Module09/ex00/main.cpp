#include "BitcoinExchange.hpp"

void init(BitcoinExchange &bitcoin, char **argv)
{
    bitcoin.openDatabase();
    bitcoin.readDatabase(argv[1]);
}

int main(int argc, char **argv)
{
    BitcoinExchange bitcoin;
    if (argc != 2)
    {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }

    try
    {
        init(bitcoin, argv);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}