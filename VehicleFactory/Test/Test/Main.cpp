#include <iostream>
using namespace std;

class Vehicle
{
public:
	virtual void beep() = 0;
};

class Car : public Vehicle
{
public:
	void beep(){ cout << "Beeping!!!" << endl; }
};

class Truck : public Vehicle
{
public:
	void beep(){ cout << "Honking!!!" << endl; }
};

class AbstractACME
{
public:
	virtual Vehicle* create() = 0;
};

class ACME : public AbstractACME
{
public:
	Vehicle* create() { return new Car(); }
};

class ACMEProxy
{
public:
	ACMEProxy(){
		this->acme = 0;
	}
	Vehicle* create(){
		return getInstance()->create();
	}
private:
	AbstractACME* acme;
	AbstractACME* getInstance(void)
	{
		if(!acme)
			this->acme = new ACME();
		return this->acme;
	}
};

int main(void)
{
	/*AbstractACME *acme = new ACME();
	Vehicle *v = acme->create();
	v->beep();*/
	ACMEProxy proxy;
	(proxy.create())->beep();
	cin.get();
	return 0;
}