#pragma once
#include<cstdio>
#include<cstring>

class Car {
protected:  //private - �ܺ��� ������X, ������ �ڽ��� ������O? 
	int	speed; //�ӷ�
	char name[40];   //�̸�

public:
	int gear;
	Car() :speed(0), gear(0), name("") {}  //������ (Constructer)
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
		printf("[%s] : ��� =%d��, �ӵ�=%dkmph\n", name, gear, speed);
	}
	void whereAmI() {
		printf("��ü�ּ� = %x\n", this);
	}
};
