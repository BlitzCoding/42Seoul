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

    void solve(int argc, char **argv);

	template<typename T>
	void merge_sort(T &structure, int start, int end);

	template<typename T>
	void merge(T &structure, int left, int mid, int right);
};

#endif