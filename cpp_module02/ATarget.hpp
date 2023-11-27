#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell;
class ATarget
{
	public:
		std::string const &getType() const;
		ATarget(std::string const &type);
		virtual ~ATarget();
		virtual ATarget* clone () const  = 0;
		void getHitBySpell(ASpell const &aspell) const;
	private:
		std::string _type;
};

#endif
