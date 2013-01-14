#include <iostream>
#include <string>

using namespace std;

class Player{

public:
	int points;
	string name;
	string gamertag;

};

void main(void){
	Player player;
	player.points=100;
	player.name="the Player";
	player.gamertag="gamergamertag";
	string welcome= player.name + " " + player.gamertag;
	cout<< "Welcome address" <<welcome <<endl;
	cout<<welcome.size();
	int size=welcome.size();
	for(int i=0;i<size;i++){
		cout<<welcome[i]<<endl;
	}
	cin.get();
	


}