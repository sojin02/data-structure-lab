#pragma once
#include<iostream>
#include<string>
using namespace std;



class SmartHome {
private:
	string owner;
	int tempuature;
	int humidty;
	bool security;
};

/*public:
	SmartHome( string o, int temputure, int humidty, bool security) {
		owner = o;
		temputure = 1;
		humidty = h;
		security = s;
	}
	*/

void setTempuature(int tempuature) {
	this->tempuature = tempuature;
}
void setHumidty(int humidty) {
	this->humidty = humidty;
}
void setSecurity(int humidty) {
	this->humidty = humidty;
}
int getTempuature() {
	return this->tempuature;
}

void prinrStatus() {

}