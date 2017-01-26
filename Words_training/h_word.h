#ifndef H_WORD
#define H_WORD
#include <iostream>
#include <string>
#include <fstream>

namespace e_words
{
	class Word
	{
	private:
		//English word
		std::string _en_word;
		//Russian word
		std::string _rus_word;
		//Transcription
		std::string _tr_word;
	public:
		Word(std::string &en, std::string &ru, std::string &tr);
		Word();
		//Comparison
		bool comparison(std::string filename);
		//show
		void show()const;
		//destruction
		~Word();
	};
}

#endif //!H_WORD
