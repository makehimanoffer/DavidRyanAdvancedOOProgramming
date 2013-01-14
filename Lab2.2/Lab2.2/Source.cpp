#include <iostream>
using namespace std;
class Character{
public:
	virtual void print(){
		cout<< "Character Printing"<< endl;
	}
};
class Protagonist : public Character{
public:
	virtual void print(){
		cout << "Protagonist Printing"<<endl;
	}
};

class Boss: public Character{
public:
	virtual void print(){
		cout << "Boss Printing" << endl;
	}
};

int main(void){
	Character* c[2];
	Protagonist p;
	Boss b;
	c[0]=&p;
	c[1]=&b;
	

	for(int i=0; i<2;i++){
		c[i]->print();
	}
	cin.get();
}
