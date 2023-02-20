#include "Span.hpp"

Span::Span()
{
    size = 0;
}

Span::Span(size_t _size)
{
    size = _size;
}

Span::~Span()
{
    
}

void    Span::addNumber(int num)
{
    if (vec.size() == size)
        throw Span::VectorSizeFull();
    vec.push_back(num);
}

int     Span::longestSpan() const
{
    if (vec.size() < 2)
        throw Span::VectorSizeOne();
    return ((*std::max_element(vec.begin(), vec.end())) - (*std::min_element(vec.begin(), vec.end())));
}

int     Span::shortestSpan() const
{
    int diff;
    int low = INT_MAX;

    if (vec.size() < 2)
        throw Span::VectorSizeOne();
    std::vector<int> copy(vec);
    std::sort(copy.begin(), copy.end());
    for (size_t i = 0; i < copy.size() - 1; i++)
    {
        diff = copy[i + 1] - copy[i];
        if (diff < low)
            low = diff;
    }
    return low;
}