/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:05:30 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/17 21:18:01 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[])
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	std::string fileName = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream infile(fileName);
	if (!infile)
	{
		std::cerr << "Error: Could not open file " << fileName << std::endl;
		return 1;
	}
	std::string output_filename = fileName + ".replace";
	std::ofstream outfile(output_filename);
	if (!outfile)
	{
		std::cerr << "Error: Could not create file " << output_filename << std::endl;
		return 1;
	}
	std::string line;
	while (std::getline(infile, line))
	{
		ssize_t pos = 0;
		while (pos = line.find(s1, pos) != std::string::npos)
		{
			line = line.erase(pos, s1.length());
			line = line.insert(pos, s2);
		}
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
	std::cout << "File processed successfully. Output written to " << output_filename << std::endl;
	return 0;
}
