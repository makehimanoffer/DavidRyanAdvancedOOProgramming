#include "Character.h";

Character::Character(){

}

Character::~Character(){

}

int Character::getScene(){
	return scene;
}

void Character::setScene(int newVal){
	Character::scene=newVal;
}
