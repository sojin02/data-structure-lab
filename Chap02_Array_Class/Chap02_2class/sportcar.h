#pragma once
#include "car.h"

class SportsCar : public car
{
public:
	bool bTurbo;
	SportsCar() {}
	-SportsCar() {}
	void setTurbo(bool bTur) {
		bTurbo = bTur;
	}
	void speedUp() {
		if (bTurbo) 
			speed += 20;
		else
			Car::speedUp();
	}
};
