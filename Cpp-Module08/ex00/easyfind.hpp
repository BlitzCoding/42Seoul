#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#define C_NRML "\033[0m"
#define C_BLCK "\033[30m"
#define C_RED  "\033[31m"
#define C_GREN "\033[32m"
#define C_YLLW "\033[33m"
#define C_BLUE "\033[34m"
#define C_PRPL "\033[35m"
#define C_AQUA "\033[36m"

enum Type
{
    VECTOR,
    LIST,
    QUEUE,
    MAP,
    SET
};

#include <iostream>
#include <algorithm>

class iterator_error : public std::exception
{
    public:
		char const * what() const throw()
		{
			return "value is not locate in container";
		}
};

template <typename T>
typename T::iterator easyfind(T container, int locate)
{
    typename T::iterator iter;

    iter = std::find(container.begin(), container.end(), locate);
    if (iter == container.end())
    {
        throw iterator_error();
    }
    return iter;
}

#endif