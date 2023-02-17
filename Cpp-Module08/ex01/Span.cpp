#include "Span.hpp"

Span::Span()
{
    size = 0;
}

Span::Span(size_t _size)
{
    size = _size;
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
    return ((*std::max_element(vec.begin(), vec.end())) - (*std::min_element(vec.begin, vec.end)));
}

int     Span::shortestSpan() const
{
    if (vec.size() < 2)
        throw Span::VectorSizeOne();
}