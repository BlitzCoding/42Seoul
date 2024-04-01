#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
    private:
        size_t size;
        std::vector<int> vec;
    public:
        Span();
        Span(size_t _size);
        ~Span();

        void    addNumber(int num);
        int     longestSpan() const;
        int     shortestSpan() const;

        class VectorSizeFull : public std::exception
		{
			public:
				char const * what() const throw()
				{
					return "Vector is Full";
				}
		};

        class VectorSizeOne : public std::exception
		{
			public:
				char const * what() const throw()
				{
					return "Vector needs more than 2";
				}
		};
};
#endif