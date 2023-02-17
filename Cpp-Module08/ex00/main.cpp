#include <vector>
#include <map>
#include <set>
#include <list>
#include <array>

#include "easyfind.hpp"

int size;
int value;
int want;
int type;

void vector_test()
{
    std::vector<int> vec;
    std::vector<int>::iterator find;

    std::cout << "input integer  size : ";
    std::cin >> size;

    for (int i = 0; i < size; i++)
    {
        std::cout << "input : ";
        std::cin >> value;
        vec.push_back(value);
    }
    std::cout << "Value you want to find : ";
    std::cin >> want;
    
    try
	{
		find = easyfind(vec, want);
		std::cout << C_YLLW << "Found number " << *find << std::endl << C_NRML;
	}
	catch(const std::exception& e)
	{
		std::cerr << C_PRPL << e.what() << C_NRML << '\n';
	}
}

void list_test()
{
    std::list<int> list;
    std::list<int>::iterator find;

    std::cout << "input integer  size : ";
    std::cin >> size;

    for (int i = 0; i < size; i++)
    {
        std::cout << "input : ";
        std::cin >> value;
        list.push_back(value);
    }
    std::cout << "Value you want to find : ";
    std::cin >> want;
    
    try
	{
		find = easyfind(list, want);
		std::cout << C_YLLW << "Found number " << *find << std::endl << C_NRML;
	}
	catch(const std::exception& e)
	{
		std::cerr << C_PRPL << e.what() << C_NRML << '\n';
	}
}

int main()
{

    
    std::cout << C_RED << "\n---------------- test ------------------\n" << C_NRML;

    std::cout << "what type do you want to test container? : \n";
    std::cout << "1.vector, 2.list";
    std::cin >> type;

    switch (type)
    {
        case 1:
            vector_test();
            break;
        case 2:
            list_test();
            break;
    }

}