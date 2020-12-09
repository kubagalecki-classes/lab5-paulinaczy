#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
#include <iterator>
std::vector< char > foo(std::list< Human >& people)
{
    std::vector<char> wektor(people.size());
	std::list<Human>::std::iterator iteratorek = people.begin();
	std::vector<char>::std::reverse_iterator reverse_iteratorek = wektor.rbegin();
	for (iteratorek; iteratorek != people.end(); iteratorek++)
	{
		iteratorek->birthday();
		if (iteratorek->isMonster()==true)
		{
			*reverse_iteratorek = 'n';
		}
		else
		{
			*reverse_iteratorek = 'y';
		}
		reverse_iteratorek++;
	}
	return wektor;
}
