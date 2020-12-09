#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
#include <iterator>
using std::iterator;
std::vector< char > foo(std::list< Human >& people)
{
    	std::vector<char> wektor(people.size());
	std::list<Human>::iterator i = people.begin();
	std::vector<char>::reverse_iterator r = wektor.rbegin();
	for (i; i != people.end(); i++)
	{
		i->birthday();
		if (i->isMonster()==true)
		{
			*r = 'n';
		}
		else
		{
			*r = 'y';
		}
		r++;
	}
	return wektor;
}
