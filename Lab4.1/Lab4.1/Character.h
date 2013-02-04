#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <string>

using namespace std;

class Character
{
public:
	Character();
	~Character();
	friend ostream &operator << (ostream &, const Character &);
private:
	string gamer_tag;
};

#endif

