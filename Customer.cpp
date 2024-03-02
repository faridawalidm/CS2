#include "Customer.h"
#include <iostream>

using namespace std;

Customer::Customer() {}

Customer::Customer(int id, const string& n, const string& e)
    : customer_id(id), name(n), email(e) {}


void Customer::setCustomerId(int id) {
    customer_id = id;
}
int Customer::getCustomerId() const {
    return customer_id;
}

void Customer::setName(const string& n) {
    name = n;
}
string Customer::getName() const {
    return name;
}

void Customer::setEmail(const string& e) {
    email = e;
}
string Customer::getEmail() const {
    return email;
}

vector<string> Customer::getTicketsPurchased() const {
    return tickets_purchased;
}

void Customer::purchaseTicket(const string& ticket) {
    tickets_purchased.push_back(ticket);
}


void Customer::cancelTicketPurchase(const string& ticket) {
    for (auto it = tickets_purchased.begin(); it != tickets_purchased.end(); ++it) {
        if (*it == ticket) {
            tickets_purchased.erase(it);
            return;
        }
    }
    cout << "Ticket not found in customer's purchases." << endl;
}

void Customer::displayCustomer() const {
    cout << "Customer ID: " << customer_id << endl;
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
    cout << "Tickets Purchased:";
    for (const auto& ticket : tickets_purchased) {
        cout << " " << ticket;
    }
    cout << endl;
}