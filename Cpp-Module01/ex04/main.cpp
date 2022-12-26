/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 23:08:31 by iyonghun          #+#    #+#             */
/*   Updated: 2022/12/26 09:27:07 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Arguments Fail\n";
		return 1;
	}

	std::ifstream infile(argv[1]);
	std::string outfile(argv[1]);
	std::ofstream replaceFile(outfile.data(), std::ios::in | std::ios::trunc);

	std::string search(argv[2]);
	std::string replaceStr(argv[3]);
	std::string line;

	outfile += ".replace";
	if (!infile.is_open())
	{
		std::cout << "Cannot open file " << argv[1] << '\n';
		return 1;
	}
	if (!replaceFile.is_open())
	{
		std::cout << "replaceFile open fail\n";
		return 1;
	}
	int i;
	while (std::getline(infile, line))
	{
		while (line.find(search, 0) < line.length())
		{
			i = line.find(search);
			line.insert(i, replaceStr);
			line.erase(i + replaceStr.length(), search.length());
		}
		replaceFile << line << '\n';
	}
	infile.close();
	replaceFile.close();
	return 0;
}