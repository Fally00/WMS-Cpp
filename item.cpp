#include "Item.h"
#include <iostream>
#include <sstream>
using namespace std;

// Print Item Details (Improved)
void printItem(const Item& item) {
    cout << "Item ID: " << item.getId() << endl;
    cout << "Item Name: " << item.getName() << endl;
    cout << "Quantity: " << item.getQuantity() << endl;
    cout << "Location: " << item.getLocation() << endl;
}

// Modified method name
void Item::changeQuantity(int delta) {
    int newQty = quantity + delta;
    if (newQty < 0) {
        throw std::invalid_argument("Insufficient stock");
    }
    setQuantity(newQty);
}

// CSV Serialization
std::string Item::toCSV() const {
    std::stringstream ss;
    ss << id << "," << name << "," << quantity << "," << location;
    return ss.str();
}

// CSV Deserialization
Item Item::fromCSV(const std::string& csvLine) {
    std::stringstream ss(csvLine);
    std::string token;

    int id = 0;
    std::string name;
    int quantity = 0;
    std::string location;

    if (getline(ss, token, ',')) id = stoi(token);
    if (getline(ss, token, ',')) name = token;
    if (getline(ss, token, ',')) quantity = stoi(token);
    if (getline(ss, token, ',')) location = token;

    return Item(id, name, quantity, location);
}