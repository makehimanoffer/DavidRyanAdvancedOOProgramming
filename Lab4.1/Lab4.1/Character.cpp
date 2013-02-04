#include "Character.h"

using namespace std;

Character:: Character()
{
	this->gamer_tag="John Doe";
}

Character::~Character()
{
}

ostream &operator << (ostream  &output, 
					  const Character &character)
{
	//output << "Gamer Tag : " << character.gamer_tag <<endl;
	output << "Testing";
	return output;
}