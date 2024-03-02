#pragma once
#include <string>
#include<iostream>
using namespace std;
class Event
{
private:
	int id;	
	string name;
	string date;
	string venue;
public:
	Event();
	

	Event(const int &id, const string& name, const string& date, const string& venue);
	
	int getId() const;
	void setId(const int& id);

	string getName() const;
	void setName(const string& name);

	string getDate() const;
	void setDate(const string& date);

	string getVenue() const;
	void setVenue(const string& venue);

	void displayEvent(ostream& out) const;
};
