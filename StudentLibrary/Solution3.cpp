#include "Solution3.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"

void Solution3::SetWords(const std::vector<std::string>& _words)
{
	words = _words;
}

void Solution3::SortWords() {}

std::vector<std::string> Solution3::GetSortedWords() const
{
	std::sort(words.begin(), words.end());
	return words;
}

