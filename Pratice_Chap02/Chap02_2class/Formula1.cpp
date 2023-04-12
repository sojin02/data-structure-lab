#include "sportscar.h"

int main()
{
	Car  yourCar;
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