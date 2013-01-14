#include <iostream>
#include <time.h>
#include <stdlib.h>


using namespace std;

typedef struct Vector2{
	float x;
	float y;
	
};

enum Explosion{ EXPLODING, EXPLODED, ARMED, IDLE};

enum EnemyState{ HIDING, EXPLODEDThing};

 class Missile{
	 private:
	 Vector2 Position;
	 
	 

 public:
	 Missile::Missile(){
		
		
	 }

	 Vector2 Missile::getPosition(){
		 return Missile::Position;
	 }

	 void Missile::setPosition(Vector2 PositionVal){
		 Position=PositionVal;
	 }

	 

 

};

class Enemy{
	 private:
		 Vector2 Position;
		 

 public:
	 Enemy::Enemy(){
		 
		
	 }

	 Vector2 Enemy::getPosition(){
		 return Enemy::Position;
	 }

	 void Enemy::setPosition(Vector2 PositionVal){
		 Enemy::Position=PositionVal;
	 }

	 

 

};


void startGame(Missile missile, Enemy enemy);
void askWhereX(Vector2 Position);
void askWhereY(int y);
void checkIfEnemyThere(Vector2 Position, Enemy enemy);


int main(void){
	Missile missile;
	Enemy enemy;
	Vector2 TempVect;
	TempVect.x=0;
	TempVect.y=0;
	
	missile.setPosition(TempVect);
	
	
	
	
	
	
	startGame(missile, enemy);

	cin.get();
	return 0;
}

void startGame(Missile missile, Enemy enemy){
	cout<< "do you want to launch a missile?(y/n)"<<endl;
	char check;
	cin>>check;
	while(check!='n'){
	if(check=='y'){
		
	    askWhereX(missile.getPosition());
		askWhereY(0);
		checkIfEnemyThere(missile.getPosition(), enemy);
		
		cout<<"Would you like to launch another?"<<endl;
		cin>>check;
	}else{
		cout<<"ok. fine"<<endl;
		cin>>check;
	}
	
	}
}

void askWhereX(Vector2 Position){
	cout<< "where do you want to launch a missile?(on x)"<<endl;
	int check=0;
	cin>>check;
	if(check!=0&&check!=1&&check!=2&&check!=3&&check!=4&&check!=5&&check!=6&&check!=7&&check!=8&&check!=9){
		cout<<"Invalid choice"<<check<<endl;
		askWhereX(Position);
	}
	
	
	
	
}

void askWhereY(int y){
	cout<< "where do you want to launch a missile?(on y)"<<endl;
	int check;
	cin>>check;
	if(check!=0&&check!=1&&check!=2&&check!=3&&check!=4&&check!=5&&check!=6&&check!=7&&check!=8&&check!=9){
		cout<<"Invalid choice"<<check<<endl;
		askWhereY(y);
	}
	
	
	
	
}


void checkIfEnemyThere(Vector2 missileCoOrds, Enemy enemy){
	srand(time(NULL));
    int r = rand()%10;
	if(missileCoOrds.x==r){
		
         r = 0;
		if(missileCoOrds.y==r){
			cout<<"you got fecking lucky";
			
		}
	}else{
			cout<<"sorry dude"<<endl;
		}


	
	
	
	
}
