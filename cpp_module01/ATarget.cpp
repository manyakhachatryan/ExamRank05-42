#include "ATarget.hpp"

std::string const &ATarget::getType() const
{
	return _type;
}

ATarget::ATarget(std::string const &type)
{
	_type = type;
}

ATarget::~ATarget()
{
	
}

void ATarget::getHitBySpell(ASpell const &aspell) const 
{
	std::cout<<_type<<" has been "<<aspell.getEffects()<<"!"<<std::endl;
}
