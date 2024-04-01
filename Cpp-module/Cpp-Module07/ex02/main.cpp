#include <iostream>
#include "Array.hpp"

#define MAX_VAL 10
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));

    std::cout << "-----------------initalize test----------------------\n";
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 100;
        numbers[i] = value;
        mirror[i] = value;
    }
    std::cout << "numbers : ";
    for (int j = 0; j < MAX_VAL; j++)
    {
        std::cout << numbers[j] << ' ';
    }

    std::cout << "\nmirror : ";
    for (int j = 0; j < MAX_VAL; j++)
    {
        std::cout << mirror[j] << ' ';
    }
    std::cout << '\n';

    //////////////////////////////////////////////////////////////////////////
    // SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);

        std::cout << "tmp : ";
        for (int j = 0; j < MAX_VAL; j++)
        {
            std::cout << tmp[j] << ' ';
        }
        std::cout << '\n';

        std::cout << "test : ";
        for (int j = 0; j < MAX_VAL; j++)
        {
            std::cout << test[j] << ' ';
        }
        std::cout << '\n';
    }
    ///////////////////////////////////////////////////////////////////////////
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand() % 100;
    }
    std::cout << "new numbers : ";
    for (int j = 0; j < MAX_VAL; j++)
    {
        std::cout << numbers[j] << ' ';
    }
    std::cout << '\n';
    delete[] mirror;//
    return 0;
}