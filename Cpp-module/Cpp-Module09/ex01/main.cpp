#include "RPN.hpp"

int main(int argc, char **argv)
{
    RPN rpn;
    if (argc != 2)
    {
        std::cerr << "Error: bad arguments" << std::endl;
        exit(1);
    }
    try
    {
        rpn.solve(argv[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}