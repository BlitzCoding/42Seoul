#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cerr << "Error: bad arguments" << std::endl;
        exit(1);
    }
    try
    {
        PmergeMe p;
        p.solve(argc, argv);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}