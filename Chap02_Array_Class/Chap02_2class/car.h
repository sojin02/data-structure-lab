#pragma once
#include<cstdio>
#include<cstring>

class Car {
protected:  //private - 외부의 접근은X, 하지만 자식의 접근은O? 
	int	speed; //속력
	char name[40];   //이름

public:
	int gear;
	Car() :speed(0), gear(0), name("") {}  //생성자 (Constructer)
	~Car() {	}
	Car(int s, char* n, int g)
		: speed(s), gear(g) {
			strcpy_s(name, n);
	}

	void changeGear(int g = 4) {
		gear = g;
	}
	void speedUp() {
		speed += 5;
	}
	void display() {
		printf("[%s] : 기어 =%d단, 속도=%dkmph\n", name, gear, speed);
	}
	void whereAmI() {
		printf("객체주소 = %x\n", this);
	}
};
