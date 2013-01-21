
#include "Character.h";
#include "CopyConstructorExample.h";

 int main(){
	Character c1; //uninit'd
	const Character c2;

	CopyConstructorExample df();
	static CopyConstructorExample static_df;
	const CopyConstructorExample const_df;
	CopyConstructorExample *dynamically_df = new 	CopyConstructorExample();
	
	cout << "Creating instance" << endl;
	CopyConstructorExample instance;
	instance.SetX(555);

	cout << "Shallow Copy" << endl;
	CopyConstructorExample deep_non_pointers_cc = 	instance;
	deep_non_pointers_cc.SetX(444);

	instance.Print();
	deep_non_pointers_cc.Print();

	cin.get();

}


