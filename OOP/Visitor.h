#pragma once
#include <iostream>
#include "Person.h"

using namespace::std;

class Visitor : public Person{
private:
	int money;	
	bool haveTicket;
public:
	int placeInHall;
	bool buyInOffice;

	Visitor(string n, string sn, int a, int m);
	Visitor();

	string getName();
	
	int getMoney();
	bool getHaveTicket();
	int getPlaceInHall();
	bool getBuyInOffice();

	void changeHaveTicket();
	void changeMoney(int prise);

	~Visitor();
};