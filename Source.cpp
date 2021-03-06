#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include "Volleyball_Class.h"


void bracket_generator(std::string Teams[])
{
	std::cout << Teams[0] << "____                    ____" << Teams[1] << std::endl;
	std::cout << Teams[2] << "____|__              __|____" << Teams[3] << std::endl;
	std::cout << "           |-----------|          " << std::endl;
	std::cout << Teams[4] << "____ __              __ ____" << Teams[5] << std::endl;
	std::cout << Teams[6] << "____|                  |____" << Teams[7] << std::endl;

}

void Volleyball_Tournament(std::string Team_Names[], int Num_Teams)
{
	std::cout << "There are " << Num_Teams << "Here today. What seed is each team? \n(Enter their number 1-8, each number can only be used once.)" << std::endl;
	std::string Participating_Teams[8];
	for (int i = 0; i < 8; i++)
	{
		std::cout << Team_Names[i] << ".\t";
		std::string str_seed;
		std::getline(std::cin, str_seed);
		int seed = std::stoi(str_seed);
		Participating_Teams[seed-1] = Team_Names[i];
	}
	bracket_generator(Participating_Teams);
}





