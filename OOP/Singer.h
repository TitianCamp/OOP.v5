#pragma once
#include <iostream>
#include "Person.h"

using namespace::std;

class Singer : public Person{
private:
	string bandName;
	string genre;
	int albumsReleased;
	bool isFamous;
public:
	Singer(string n, string sn, int a, string bn, string g, int ab, bool iF);
	Singer();

	string getName();

	string getBandName();
	string getGenre();
	int getAlbumsReleased();
	bool getIsFamous();

	void readFromFile(string fileName);

	~Singer();
};

