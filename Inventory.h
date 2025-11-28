#pragma once
#include <vector>
#include <string>
#include "Item.h"

class Inventory {
private:
    std::vector<Item> items;
    std::string dataFilePath;
public:
    Inventory(const std::string &filePath);
    void addItem(const Item &item);
    void removeItem(const std::string &itemId);
    Item* findItem(const std::string &itemId);
    void displayAllItems() const;
    std::string toCSV(const std::string& filePath) const;
    void fromCSV(const std::string &csvData);
    
    // Sorting methods
    void sortByID();
    void sortByName();
    void sortByQuantity();
    void sortByLocation();
};
