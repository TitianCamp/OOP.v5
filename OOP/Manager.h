#pragma once
#include <iostream>
#include <vector>
#include "Ticket.h"
#include "Visitor.h"
#include "Person.h"

using namespace::std;

class Manager : public Person {
public:
	
	Manager(string n, string sn, int a);
	Manager();
	string getName();

	vector<Ticket> createTickets(int volume);
	void writeInFile(vector<Visitor>& visitors, string fileName);
	void sellTicket(Visitor& visitor, Ticket& ticket);

	~Manager();
};
