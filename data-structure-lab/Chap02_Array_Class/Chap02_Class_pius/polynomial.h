#pragma once
#include<cstdio>
#include <vector>
#include<iostream>
#define MAX_DEGREE 100
using namespace std;

class polynomialV {
	vector <float> coef;
public:
	int degree() {
		return coef.size();			//coef vector의 크기 반환
	}
	void read() {
		int deg;
		float value;
		printf("다항식의 최고 차수를 입력하세요 : ");
		scanf_s("%d", &deg);
		printf("각 항의 계수를 입력하세요 (총 %d개)\n", deg + 1);
		for (int i = 0; i <= deg; i++)
		{
			scanf_s("%f", value);
			coef.push_back(value);

		}
	}

};

class Polynominal {
	int degree; //다항식의 최고 차수
	float coef[MAX_DEGREE]; //각 항에 대한 최고 계수

public:
//생성자
	Polynominal() {
		degree = 0; //degree 0으로 초기화
		coef[0] = 0.0f; //coef 배열 0번째 0.0f로 초기화
	}
	// Polynominal() : degree(0) {};

	void read() {
		printf("다항식의 최고 차수를 입력하세요 : ");
		scanf_s("%d", &degree);
		printf("각 항의 계수를 입력하세요 (총 %d개)\n", degree + 1);
		for (int i = 0; i <= degree; i++)
		{
			scanf_s("%f", coef + i);
		}
	}

	void display(const char* str = "Poly = ") {
		printf("\t%s", str);
		for (int i = 0; i < degree; i++)
			printf("%5.1f x^%d+ ", coef[i], degree - i);
		printf("%4.1f\n", coef[degree]);
	}

	void add(Polynominal a, Polynominal b) {
		if (a.degree > b.degree) {
			*this = a;
			for (int i = 0; i <= b.degree; i++)
				coef[i + (degree - b.degree)] += b.coef[i];

		}
		else {
			*this = b;
			for (int i = 0; i <= a.degree; i++)
				coef[i + (degree - a.degree)] += a.coef[i];
		}
	}
	bool isZero() {
		return degree == 0;
	}

	void negate() {
		for (int i = 0; i < degree; i++)
			coef[i] = -coef[i];
	}
};