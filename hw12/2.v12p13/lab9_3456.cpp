#include <iostream>
#include "Car.h"
#include "SUV.h"
#include "Motor.h"
#include "Engineer.h"
//using namespace std;
int main() {
	// sprint 5
	Car* myCars[5];
	myCars[0] = new SUV;
	myCars[1] = new SUV;
	myCars[2] = new Motor;
	myCars[3] = new Motor;
	myCars[4] = new SUV;
	for (int i = 0; i < 5; i++) myCars[i]->klaxon(1);

	// Sprint 4
	Car* myCar;
	myCar = new Car(100.0, 4, 4500., 4); std::cout << myCar->speed << "\n";
	//std::cout << myCar->getPrice() << "\n";
	//std::cout << myCar->price << "\n";
	Engineer* bab;
	bab = new Engineer;
	std::cout << " Car Price is " << bab->getCarPrice(myCar) << "\n";
	std::cout << " Car Window Number are "<< bab->getCarWindow(myCar) << "\n";
	std::cout << " Car Wheels numbers are "<< bab->getCarWheels(myCar) << "\n";
	std::cout << " Car Speed is "<<bab->getCarSpeed(myCar) << "\n";
	bab->speedup(myCar, 0.1);
	std::cout << " Car Speed is "<<bab->getCarSpeed(myCar) << "\n";
	//getchar();
}