#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include "ASpell.hpp"
#include <map>
class Warlock
{
	public:
		std::string const &getName() const;
		std::string const &getTitle() const;
		void setTitle(std::string const &title);
		Warlock(std::string const &name, std::string const &title);
		~Warlock();
		void introduce() const;
		void learnSpell(ASpell * aspell);
		void forgetSpell(std::string name);
		void launchSpell(std::string name, ATarget const &atarget);
	private:
		std::string _name;
		std::string _title;
		std::map<std::string, ASpell*> _map;
};

#endif
