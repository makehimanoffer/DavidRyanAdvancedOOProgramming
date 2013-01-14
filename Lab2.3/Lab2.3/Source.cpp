#include <iostream>
using namespace std;

class BaseOne
{
public:
	BaseOne() : x(1) {} 
	int x;
};

class BaseTwo
{
public:
	BaseTwo() : x(2) {}
	int x;
};

class BaseThree : BaseTwo
{
public:
	BaseThree() : x(3) {}
	int x;
};


class BaseFour : public BaseOne, public BaseThree
{
public:
	BaseFour() {}
	int GetX1() { return BaseThree::x; } 
	//Error ambiguous access of 'x'
	int GetX2() { 
		return BaseOne::x; 
	} 
	//'BaseTwo' is already a base-class 
	//of 'BaseThree'
	int GetX3() const { 
		return BaseThree::x; 
	} // OK
	int GetX4() { 
		BaseThree& b3 = *this;
		return b3.x;
	}
};
int main(void)
{
	BaseFour b4;
	cout << b4.GetX3() << endl;
	cout << b4.GetX4() << endl;
	char r; cin.get(r);
}
