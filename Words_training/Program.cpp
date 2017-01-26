#include "h_word.h"

int size = 0;

int main()
{
	setlocale(LC_ALL, "Rus");
	std::cout << "Количество слов?" << std::endl;
	std::cin >> size;
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
	e_words::Word *pt = new e_words::Word[size];
	for (int i = 0; i < size; ++i)
	{
		
		std::getline(infile, en, '\n');
		std::transform(en.begin(), en.end(), en.begin(),::tolower);
		std::getline(infile, ru, '\n');
		infile.ignore();

		e_words::Word temp(en, ru, tr);
		pt[i] = temp;
	
	}
	infile.close();

	

    for (int i = 0; i < size;++i)
	{
		pt[i].comparison("failed.txt");
	
	};
	

	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();

}