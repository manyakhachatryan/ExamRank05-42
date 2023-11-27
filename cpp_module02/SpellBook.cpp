#include "SpellBook.hpp"



SpellBook::SpellBook()
{

}

SpellBook::~SpellBook()
{

}



void SpellBook::learnSpell(ASpell *aspell)
{
	if(aspell)
	{
		_map[aspell->getName()] = aspell;
	}
}

void SpellBook::forgetSpell(std::string const & name)
{
	if(_map.find(name)!=_map.end())
	{
		_map.erase(_map.find(name));
	}
}


ASpell * SpellBook::createSpell(std::string const & name)
{

	ASpell * tmp = NULL;

	if(_map.find(name)!=_map.end())
	{
		tmp = _map[name];
	}

	return tmp;
}
