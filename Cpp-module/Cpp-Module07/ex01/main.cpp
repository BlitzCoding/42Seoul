#include "iter.hpp"

void increment_string(std::string &str)
{
    for (size_t i = 0; i < str.size(); i++)
        str[i]++;
}

int main( void )
{
    std::string tab[6] = {"abcde", "ABDCE", "apple", "12345", "YoGnHlEe", "das"};
    std::string *ptr = tab;
    int len = sizeof(tab) / sizeof(*tab);
    iter(ptr, len, increment_string);
    std::cout << "Array = ";
    for (int i = 0; i < len; i++)
        std::cout << tab[i] << " ";
    return 0;
}