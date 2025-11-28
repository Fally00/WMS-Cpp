#pragma once // using pragma once to avoid multiple inclusions
#include <string>

class Item{

public:
    std::string id;
    std::string name;
    int quantity;
    std::string location;

    void displayItem() const;
    void updateQuantity(int qty);

    std::string toCSV() const;
    void fromCSV(const std::string &csvLine);

};
