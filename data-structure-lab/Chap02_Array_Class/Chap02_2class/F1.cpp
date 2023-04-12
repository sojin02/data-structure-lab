#include"sportcar.h"

int main()
{
	Car     yourCar;
	yourCar (100, 4, "myCAr");
	yourCar.display();
	yourCar.whereAmI();
	yourCar.gear = 7;
	yourCar.display();
	yourCar.changeGear(3);
	yourCar.display();

	SportsCar myCar;
	myCar.setTurbo(Ture);

	myCar.speedUp();
	myCar.display();
	return 0;
}