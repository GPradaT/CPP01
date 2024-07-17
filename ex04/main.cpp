/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:05:30 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/17 09:52:53 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replace_all(std::string& source, const std::string& from, const std::string& to)
{
	if (from.empty())
		return;
	std::size_t	start_pos = 0;
	while ((start_pos = source.find(from, start_pos)) != std::string::npos)
	{
		source.replace(start_pos, from.length(), to);
		start_pos += to.length();
	}
}

int main(int argc, char* argv[])
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream infile(filename);
	if (!infile)
	{
		std::cerr << "Error: Could not open file " << filename << std::endl;
		return 1;
	}

	std::string output_filename = filename + ".replace";
	std::ofstream outfile(output_filename);
	if (!outfile)
	{
		std::cerr << "Error: Could not create file " << output_filename << std::endl;
		return 1;
	}

	std::string line;
	while (std::getline(infile, line))
	{
		replace_all(line, s1, s2);
		outfile << line << std::endl;
	}

	infile.close();
	outfile.close();

	std::cout << "File processed successfully. Output written to " << output_filename << std::endl;
	return 0;
}
