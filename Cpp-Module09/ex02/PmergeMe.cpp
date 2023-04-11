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

template <typename T>
void PmergeMe::merge_sort(T &structure, int start, int end)
{
	if (start < end)
	{
		int mid = (start + end) / 2;
		merge_sort(structure, start, mid);
		merge_sort(structure, mid + 1, end);
		merge(structure, start, mid, end);
	}
}

template <typename T>
void PmergeMe::merge(T &structure, int left, int mid, int right)
{
	std::vector<int> tmp(right - left + 1);
	int i = left, j = mid + 1, k = 0;
	while (i <= mid && j <= right)
	{
		if (structure[i] <= structure[j])
		{
			tmp[k++] = structure[i++];
		}
		else
		{
			tmp[k++] = structure[j++];
		}
	}
	while (i <= mid)
	{
		tmp[k++] = structure[i++];
	}
	while (j <= right)
	{
		tmp[k++] = structure[j++];
	}

	for (int a = 0; a < k; a++)
	{
		structure[left + a] = tmp[a];
	}
}

void check(std::string input)
{
	long				num;

	num = atol(input.c_str());
	if (num < 0)
		throw std::invalid_argument("Error: Only Positive");
	if (num > 2147483647)
		throw std::invalid_argument("Error: out of range");
	if (input.find("0123456789") != std::string::npos)
		throw std::invalid_argument("Error: not Integer");
	if (input.empty())
		throw std::invalid_argument("Error: empty argument");
	
}

void PmergeMe::solve(int argc, char **argv)
{
    std::clock_t	start;
	std::clock_t	finish;
	int				num;

    for (int i = 1; i < argc; i++)
	{
		std::string input = std::string(argv[i]);
		check(input);
		num = atoi(argv[i]);
		vec.push_back(num);
		deq.push_back(num);
	}

	std::cout << "Before : ";
	for (std::vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)
		std::cout << *iter << " ";
	std::cout << '\n';

	start = clock();
	merge_sort(vec, 0, vec.size() - 1);
	finish = clock();
	double vector_time = static_cast<double>(finish - start) / static_cast<double>(CLOCKS_PER_SEC);
	start = clock();
	merge_sort(deq, 0, vec.size() - 1);
	finish = clock();
	double deque_time = static_cast<double>(finish - start) / static_cast<double>(CLOCKS_PER_SEC);
	std::cout << "After : ";
	for (std::vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)
		std::cout << *iter << " ";
	std::cout << '\n';
	std::cout << "Time to process a range of " << vec.size() <<  " elements with std::vector : " << std::fixed << std::setprecision(5) << vector_time * 10 << " us\n";
	std::cout << "Time to process a range of " << deq.size() <<  " elements with std::deque : " << std::fixed << std::setprecision(5) << deque_time * 10 << std::setprecision(0) << " us\n";
}