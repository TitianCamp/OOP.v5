#pragma once
#include <iostream>

using namespace::std;

class Gender {
public:
	string gender;

	Gender(string g) :gender(g) {};
	Gender() : gender("unknown") {}
};

template <typename T1, typename T2, typename T3> class Visitory {
public:
	T1 name;
	T1 surname;
	T2 age;
	T2 money;
	T3 gender;
	bool haveTicket;
	int placeInHall;
	bool buyInOffice;


	Visitory(T1 n, T1 sn, T2 a, T2 m) :name(n), surname(sn), age(a), money(m),
		haveTicket(false), placeInHall(0), buyInOffice(a % 2) {
		string gender_ = "male"; this->gender = Gender(gender_);
	};
	Visitory() :name("Mike"), surname("Leshchuk"), age(18), gender(Gender('male')), money(500),
		haveTicket(false), placeInHall(0), buyInOffice(0) {
		string gender_ = "male"; this->gender = Gender(gender_);
	};

	T1 getName() { return this->name; }

	T1 getSurname() { return surname; };

	T2 getAge() { return age; };

	T2 getMoney() { return money; };

	bool getHaveTicket() { return haveTicket; };

	int getPlaceInHall() { return placeInHall; };

	bool getBuyInOffice() { return buyInOffice; };

	void changeHaveTicket() { haveTicket ? this->haveTicket = false : this->haveTicket = true; };

	void changeMoney(int prise) { money -= prise; };
};

