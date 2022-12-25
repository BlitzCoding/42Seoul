/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyonghun <iyonghun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 23:08:31 by iyonghun          #+#    #+#             */
/*   Updated: 2022/12/25 23:09:26 by iyonghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char *av[])
{
	if (ac != 4){
		std::cout << "Bad arguments."<< std::endl << "Use like " << av[0] << " <file> \"S1\" \"S2\"\033[0m" << std::endl;
		return(1);
	}

	std::ifstream	ifile(av[1]);
	std::string 	outfile(av[1]);
	outfile += ".replace";
	std::ofstream	ofile(outfile.data(), std::ios::in | std::ios::trunc);

	std::string		search(av[2]);
	std::string		remplace(av[3]);
	std::string		line;
	size_t		i;
	if (!ifile.is_open()){
		std::cout << "Cannot open file " << av[1] << std::endl;
		return(2);
	}
	if (!ofile.is_open()){
		std::cout << "Cannot create or modify the file \"" << av[1] << ".replace\"" << std::endl;
		return(3);
	}
	while (std::getline(ifile, line)){
		while (line.find(search, 0) < line.length()){
			i = line.find(search);
			line.insert(i, remplace);
			line.erase(i + remplace.length(), search.length());
		}
		ofile << line << std::endl;
	}
	ifile.close();
	ofile.close();
	return (0);
}