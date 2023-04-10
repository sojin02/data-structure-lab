#pragma once
#include "car.h"

class SportsCar : public car
{
public:
	bool bTurbo;
	SportsCar() {}
	~SportsCar() {}
	void setTurbo(bool bTur) {
		bTurbo = bTur;
	}
	void speedUp() {
		if (bTurbo) 
			speed += 20;
		else
			Car::speedUp();
	}
	void display() {
		printf("[%s] : 기어 =%d단, 속도=%dkmph\n", name, gear, speed);
	}
};
