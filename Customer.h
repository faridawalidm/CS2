#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Customer {
private:
    int customer_id;
    string name;
    string email;
    vector <string> tickets_purchased;

public:
    Customer();
    Customer(int id, const string& n, const string& e);

    void setCustomerId(int id);
    int getCustomerId() const;

    void setName(const string& n);
    string getName() const;

    void setEmail(const string& e);
    string getEmail() const;

    vector<string> getTicketsPurchased() const;



    void purchaseTicket(const string& ticket);

    void cancelTicketPurchase(const string& ticket);

    void displayCustomer() const;
};