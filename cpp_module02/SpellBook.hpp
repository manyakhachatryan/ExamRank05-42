#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include "ASpell.hpp"
#include <map>
class SpellBook
{
	public:
			SpellBook();
			~SpellBook();
		void learnSpell(ASpell * aspell);
		void forgetSpell(std::string const & name);
		ASpell* createSpell(std::string const &name);
	private:
			std::map<std::string, ASpell*> _map;
};

#endif
