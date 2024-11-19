#pragma once
#include <iostream>

using namespace::std;

class Person {
protected:
	string name;
	string surname;
	int age;
public:
	Person(string n, string sn, int a);
	Person();

	virtual string getName() = 0;
	string getSurname();
	int getAge();

	virtual ~Person();
};

