#include "AbstractFactory.h"
#include "Character.h"
#include "CharacterFactory.h"
#include <vector>
int main(){
	AbstractFactory* factory = new CharacterFactory;
	vector<Character*> characters;
	characters.push_back(factory->CreatePlayer());
	characters.push_back(factory->CreateOpponents());

	for(int i = 0; i < characters.size(); i++)
	{
		characters[i]->draw();
	}

	getchar();
	return 0;
}
