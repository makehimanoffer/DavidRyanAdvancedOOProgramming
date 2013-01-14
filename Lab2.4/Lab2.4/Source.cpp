#include <iostream>
using namespace std;
class Character
{
public:
	Character() { 
		head = new Head(); body = new Body();
	}
	~Character(){
		delete head; delete body;
	}
private:
	Head* head; Body* body;
};

class Head {};
class Body {};

int main()
{
	Character *c = new Character();
	

	//goes out of scope


}
