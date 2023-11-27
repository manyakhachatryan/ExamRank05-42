#include "Warlock.hpp"

std::string const &Warlock::getName() const
{
	return _name;
}

std::string const &Warlock::getTitle() const 
{
	return _title;
}

void Warlock::setTitle(std::string const &title)
{
	_title = title;

}

Warlock::Warlock(std::string const &name, std::string const &title)
{
	_name= name;
	_title = title;
	std::cout<<_name<<": This looks like another boring day."<<std::endl;
}

Warlock::~Warlock()
{
	std::cout<<_name<<": My job here is done!"<<std::endl;
}

void Warlock::introduce () const 
{
	std::cout<<_name<<": I am "<<_name<<", "<<_title<<"!"<<std::endl;
}

void Warlock::learnSpell(ASpell *aspell)
{

		_map.learnSpell(aspell);

}

void Warlock::forgetSpell(std::string name)
{

		_map.forgetSpell(name);
	
}


void Warlock::launchSpell(std::string name, ATarget const &atarget)
{
	if(_map.createSpell(name))
	{
		_map.createSpell(name)->launch(atarget);
	}
}
