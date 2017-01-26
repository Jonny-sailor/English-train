#include "h_word.h"



//***********************************************************

//Construction word
e_words::Word::Word(std::string &en, std::string &ru, std::string &tr)
{
    _en_word = en;
	_rus_word = ru;
	_tr_word = tr;
};

//***********************************************************

//Construction word
e_words::Word::Word()
{
	_en_word = "empty";
    _rus_word = "empty";
    _tr_word = "empty";
};

//***********************************************************

//Destruction word
e_words::Word::~Word()
{};

//***********************************************************

//Comparison words
bool e_words::Word::comparison(std::string filename)
{
	std::ofstream outfile;
	outfile.open(filename);
	if(!outfile.is_open())
	{ 
		exit(EXIT_FAILURE);
	};
	std::string in_word;
	std::cout << _rus_word << std::endl;
	std::cin >> in_word;
	if (in_word != _en_word)
	{
		outfile << _en_word << std::endl << _rus_word << std::endl << std::endl;
	}
	else 
	{
		return true;
	}
	outfile.close();
};
//***********************************************************

//Show word
void e_words::Word::show()const
{
	std::cout << _en_word << '\t';
	std::cout << _tr_word << '\t';
	std::cout << _rus_word << '\t';
	std::cout << std::endl;

};
//***********************************************************
