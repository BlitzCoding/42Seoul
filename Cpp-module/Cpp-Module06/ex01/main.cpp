#include <iostream>
#include <string>
#include <cctype>
#include <limits>
#include <cstdlib>
#include <stdint.h>

struct Data
{
    int i[10];
    char c;
};

uintptr_t serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
    Data *raw = new Data;
    Data *newdata;

    // set
    for (int j = 0; j < 10; j++)
    {
        raw->i[j] = 42;
    }
    raw->c = 'G';

    // Check
    std::cout << "initial data address : " << raw << std::endl;
    uintptr_t tmp = serialize(raw);
    std::cout << "serialized data address : 0x" << tmp << std::endl;
    newdata = deserialize(tmp);
    std::cout << "deserialized data address : " << newdata << std::endl;

    // print
    for (int j = 0; j < 9; j++)
    {
        std::cout << raw->i[j] << std::dec << std::endl;
    }
    std::cout << raw->c << std::endl;

    delete raw;
}