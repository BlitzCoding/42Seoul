#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

PmergeMe::PmergeMe(const PmergeMe &rhs)
{
	*this = rhs; 
}

PmergeMe::~PmergeMe()
{

}

PmergeMe& PmergeMe::operator=(const PmergeMe &rhs)
{
	this->vec = rhs.vec;
	this->deq = rhs.deq;
	return *this;
}

void PmergeMe::solve(char **argv)
{
    
}