#include "Ticket.h"
#include "Event.h"

Ticket::Ticket()
{
	id = 0;
	eventId = 0;
	customerId = 0;
	price = 0.0;
	reserved = false;
}

Ticket::Ticket(int id, int eventId, int customerId, float price)
{
	this->id = id;
	this->eventId = eventId;
	this->customerId = customerId;
	this->price = price;
}

int Ticket::getId() const {
    return id;
}

void Ticket::setId(int id) {
    this->id = id;
}

int Ticket::getEventId() const {
    return eventId;
}

void Ticket::setEventId(int eventId) {
    this->eventId = eventId;
}

int Ticket::getCustomerId() const {
    return customerId;
}

void Ticket::setCustomerId(int customerId) {
    this->customerId = customerId;
}

double Ticket::getPrice() const {
    return price;
}

void Ticket::setPrice(float price) {
    this->price = price;
}

bool Ticket::getreservation() const {
    return reserved;
}

void Ticket::reserve() {
    reserved = true;
}

void Ticket::cancelReservation() {
    reserved = false;
}

void Ticket::displayTicket(ostream &out) const {
    out << "Ticket ID: " << id << endl;
    out << "Event ID: " << eventId << endl;
    out << "Customer ID: " << customerId << endl;
    out << "Price: " << price << endl;
}

int main()
{
    Event event1;
    
    event1.setId(1);
    event1.setName("Concert");
    event1.setDate("2024-03-01");
    event1.setVenue("Main Stadium");

    cout << "Event 1 Information:" << endl;
    event1.displayEvent(std::cout);
    cout << std::endl;

    Event event2(2, "Festival", "2024-04-15", "City Park");

    cout << "Event 2 Information:" << endl;
    event2.displayEvent(cout);
    cout << endl;
}
