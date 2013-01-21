#include <iostream>

using namespace std;

class Character
{
public:
	Character();

	~Character();
	int getScene();
	void setScene(int );

	void m1 (Character);
	void m2 (const Character);
	void m3(Character*);
	void m4(const Character*);
	void m5(Character* const ref);
	void m6(static Character);
	void m7( const Character&);
	void m8(Character&);

	

	

private:
	int scene;
};
