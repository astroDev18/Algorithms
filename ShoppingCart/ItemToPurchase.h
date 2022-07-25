//
// Created by isaja on 7/25/2022.
//

#ifndef ALGORITHMS_ITEMTOPURCHASE_H
#define ALGORITHMS_ITEMTOPURCHASE_H
/*
 *
Build the ItemToPurchase class with the following specifications:

Default constructor
Public class functions (mutators & accessors)
SetName() & GetName() (2 pts)
SetPrice() & GetPrice() (2 pts)
SetQuantity() & GetQuantity() (2 pts)
Private data members
string itemName - Initialized in default constructor to "none"
int itemPrice - Initialized in default constructor to 0
int itemQuantity - Initialized in default constructor to 0
 */
#include <string>

using namespace std;

class ItemToPurchase {

public:
    void SetName(string itemNameValue);
    string GetName();
    int SetPrice(int itemPriceValue);

    int GetPrice() const;

    void SetQuantity(int itemQuantityValue);
    int GetQuantity() const;
private:
    string itemName;
    int itemPrice;
    int itemQuantity;
};


#endif //ALGORITHMS_ITEMTOPURCHASE_H
