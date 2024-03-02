#include "Event.h"

Event::Event()
{
    id = 0;
    name = "";
    date = "00/00/0000";
    venue = "";
}

Event::Event(const int& id, const string& name, const string& date, const string& venue)
{
    this->id = id;
    this->name = name;
    this->date = date;
    this->venue = venue;
}

int Event::getId() const
{
    return id;
}

void Event::setId(const int& id)
{
    this->id = id;
}

string Event::getName() const
{
    return name;
}

void Event::setName(const string& name)
{
    this->name = name;
}

string Event::getDate() const
{
    return date;
}

void Event::setDate(const string& date)
{
    this->date = date;
}

string Event::getVenue() const
{
    return venue;
}

void Event::setVenue(const string& venue)
{
    this->venue = venue;
}

void Event::displayEvent(ostream& out) const
{

    out << "Event ID: " << id << endl;
    out << "Name: " << name << endl;
    out << "Date: " << date << endl;
    out << "Venue: " << venue << endl;
}
