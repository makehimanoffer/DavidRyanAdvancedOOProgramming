////////////////////////////////////////////////////////////////////////////////
// Filename: Player.h
////////////////////////////////////////////////////////////////////////////////
#ifndef _PLAYER_H_
#define _PLAYER_H_


//////////////
// INCLUDES //
//////////////
#include <iostream>
#include "Character.h"
using namespace std;


////////////////////////////////////////////////////////////////////////////////
// Class name: Player
////////////////////////////////////////////////////////////////////////////////

class Player : public Character {
  public:
	Player();
	~Player();
    void draw();
};

#endif