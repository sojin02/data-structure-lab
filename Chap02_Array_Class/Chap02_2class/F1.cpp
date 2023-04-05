#include"sportcar.h"

int main()
{
	Car     yourCar;
	//myCar (100,  "my car", 4);
	yourCar.display();
	yourCar.whereAmI();
	yourCar.gear = 7;
	yourCar.display();
	yourCar.changeGear(3);
	yourCar.display();

	SportsCar myCar;
	myCar
		myCar.speedUp();
	myCar.display();
	return 0;
}