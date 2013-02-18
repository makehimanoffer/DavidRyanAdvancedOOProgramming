#include "CharacterFactory.h"
#include "Player.h"
#include "Boss.h"

 CharacterFactory::CharacterFactory()
{
	
}





CharacterFactory::~CharacterFactory()
{
}

	Character* CharacterFactory::CreatePlayer()
	{
		return new Player;
    }
	
	Character* CharacterFactory::CreateOpponents()
	{
		return new Boss;
    }


