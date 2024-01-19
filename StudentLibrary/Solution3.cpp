#include "Solution3.h"

#include <algorithm>
// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_3

void Solution3::SetWords(const std::vector<std::string>& _words)
{
	words = _words;
}

void Solution3::SortWords() 
{
	if (words.size() > 0)std::sort(words.begin(), words.end());
	else throw std::exception("il n'existe pas");
}

std::vector<std::string> Solution3::GetSortedWords() const
{
	
	return words;
}

#endif
