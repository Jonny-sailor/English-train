#include "h_word.h"



int main()
{
	setlocale(LC_ALL, "Rus");
	std::ifstream infile;
	infile.open("new_words.txt");
	if (!infile.is_open())
	{
		exit(EXIT_FAILURE);
	};
	std::string en = "empty";
	std::string ru = "empty";
	std::string tr = "empty";

	//Fill array
	e_words::Word words[20];
	for (int i = 0; i < 20; ++i)
	{
		
		std::getline(infile, en, '\n');
		std::getline(infile, ru, '\n');
		infile.ignore();

		e_words::Word temp(en, ru, tr);
		words[i] = temp;
	
	}
	infile.close();

	
	for (int i = 0; i < 1;++i)
	{
		words[i].comparison("failed.txt");
	

	};
	

	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();

}