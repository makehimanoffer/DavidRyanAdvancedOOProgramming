#include "CopyConstructorExample.h";

CopyConstructorExample::CopyConstructorExample() 
{
	cout << "Default Constructor" << endl; 
}

CopyConstructorExample::CopyConstructorExample(const CopyConstructorExample& cc) 
{ 
	cout << "Copy Constructor" << endl; 
}

CopyConstructorExample::~CopyConstructorExample()
{

}

int CopyConstructorExample::GetX()
{ 
		return this->x;
}

void CopyConstructorExample::SetX(int x)
{ 
	CopyConstructorExample::x = x;
}

void CopyConstructorExample::Print()
{ 
	cout << "The value of X is : " << this->GetX() << endl;
}