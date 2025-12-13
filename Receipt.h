#pragma once
#include <string>
#include <vector>
#include "Item.h"


// Structure to hold item details in the receipt
struct ReceiptItem {
    int id;
    std::string name;
    int quantity;
};


// Receipt class to manage purchased items
class Receipt {
    public:
        void addItem(const Item& item, int quantity);
        void print() const;
        void clear();
        void saveToFile(const std::string& filename) const;
    private:
        std::vector<ReceiptItem> items;


    };

    