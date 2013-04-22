#include <stdio.h>
#include <iostream>


using namespace std;
class Vehicle{
   public:
       Vehicle();
	   ~Vehicle();
	   virtual void beep()=0;
	   };


class Car: public Vehicle{
   public:
	  Car();
	  ~Car();
	  void beep(){
	 

 
	 std:cout<< "bip"<<endl;
	  }
};
	  
class Truck: public Vehicle{
    public:
	  Truck();
	   ~Truck();
	  void beep(){
	  std::cout<< "HAWWWWW"<<endl;
	  }
};
	  
class AbstractFactory{
    public:
	int counter;
	virtual Vehicle* create()=0;

	
	};
	
class ACME: public AbstractFactory{
    public:
	Vehicle* create(){
	 
	counter++;
	if(counter%2==0){
	return new Car();
	}
	
	if(counter%2==1){
	return new Truck();
	}
};


class VehicleFactoryProxy: public ACME{

    public:
	VehicleFactoryProxy();
	virtual ~VehicleFactoryProxy();
	Vehicle* create(){
	getInstance()-> create();
	}
	
	private:
	ACME* acme;
	ACME* getInstance(void){
	if(!acme){
	acme=new ACME();
	}
	return acme;
	}
};

class Main{
public:
	Main();
	virtual ~Main();



	int main(){
	
	VehicleFactoryProxy * vfp = new VehicleFactoryProxy();
	Vehicle* proxyVehicle = vfp->create();
	for(int i=0;i<100;i++){
	vfp->create();
	proxyVehicle->beep();
	}

	
	};