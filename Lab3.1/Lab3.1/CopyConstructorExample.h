#include <iostream>

using namespace std;

class CopyConstructorExample
{
public:
	CopyConstructorExample();
	CopyConstructorExample(const CopyConstructorExample& );
	~CopyConstructorExample();
	int GetX();
	void SetX(int x);
	void Print();
private:
	int x;
};
