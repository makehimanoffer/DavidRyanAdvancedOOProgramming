#include "AbstractFactory.h"
class CharacterFactory : public AbstractFactory {
  public:

	CharacterFactory();
	~CharacterFactory();
    Character* CreatePlayer();
    Character* CreateOpponents();
};
