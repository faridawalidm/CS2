#pragma once
#include <iostream>
using namespace std;

class Ticket
{
private:
    int id;
    int eventId;
    int customerId;
    float price;
    bool reserved;

public:
    Ticket();

    Ticket(int id, int eventId, int customerId, float price);

    int getId() const;
    void setId(int id);

    int getEventId() const;
    void setEventId(int eventId);

    int getCustomerId() const;
    void setCustomerId(int customerId);

    double getPrice() const;
    void setPrice(float price);

    bool getreservation() const;

    void reserve();

    void cancelReservation();
    
    void displayTicket(ostream &out) const;
    
};