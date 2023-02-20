#include "Span.hpp"

int main()
{
    size_t size;
    int num;

    std::cout << "Input size : ";
    std::cin >> size;
    Span sp = Span(size);

    
    for (size_t i = 0; i < size; i++)
    {
        std::cout << "Input number : ";
        std::cin >> num;
        sp.addNumber(num);
    }     
    try
    {
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Error" << '\n';
    }
    return 0;
}