#pragma once
#include <iostream>

using namespace::std;

class Ticket {
private:
	static string time;
	string degree;
	int prise;
	int plase;
	bool available;
public:
	int someNumber;
	string owner;
	bool isElectronic;

	Ticket(int number, int item);
	Ticket();
	int getPrise();
	string getDegree();
	int getPlase();
	static string getTime();
	bool getAvailable();
	string getOwner();
	bool getFormat();
	int getSomeNumber();

	void setIsElectronic();
	void setOwner(string name);
	void changeAvailable();
	void setTime(string time);
	void createElectronic();


	Ticket& operator++ () {	someNumber += 5;	return *this; }
	Ticket& operator-- () {	someNumber -= 5;	return *this; }
	Ticket operator++ (int) { Ticket prev = *this; ++*this; return prev; }
	Ticket operator-- (int) { Ticket prev = *this; --*this; return prev; }

	int operator+ (int t) { return (this->someNumber + t); }
	int operator- (int t) { return (this->someNumber - t); }
	int operator* (int t) { return (this->someNumber * t); }


	Ticket& operator = (int number) { someNumber = number; return *this; }
	Ticket& operator += (int number) { someNumber += number; return *this; }
	Ticket& operator -= (int number) { someNumber -= number; return *this; }
	Ticket& operator *= (int number) { someNumber *= number; return *this; }

};