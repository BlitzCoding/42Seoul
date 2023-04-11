#ifndef PMERGEME_H
# define PMERGEME_H

#include <vector>
#include <deque>
#include <iostream>
#include <sstream>
#include <ctime>
#include <iomanip>

class PmergeMe
{
private:
	std::vector<int> vec;
	std::deque<int>	deq;

public:
	PmergeMe();
	PmergeMe(const PmergeMe& rhs);
	PmergeMe& operator=(const PmergeMe& rhs);
	~PmergeMe();

    void solve(char **argv);
};

#endif