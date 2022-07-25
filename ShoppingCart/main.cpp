//
// Created by isaja on 7/25/2022.
//

/*
(1) Create three files to submit:

ItemToPurchase.h - Class declaration
ItemToPurchase.cpp - Class definition
main.cpp - main() function

(2) In main(), prompt the user for two items and create two objects of the ItemToPurchase class. Before prompting for the second item, call cin.ignore() to allow the user to input a new string. (2 pts)

 */
#include <iostream>
#include "ItemToPurchase.h"
#include<limits> //used to get numeric limits

using namespace std;

int main() {

    string userItemInput;
    string userItemInput2;
    int userPriceInput;
    int userPriceInput2;

    int userItemQuantity;
    int userItemQuantity2;

    string item, price;
    string item2, price2;

    // START of Item 1 input
    cout << "Item 1" << endl;
    // Get item name and store in item variable;
    cout << "Enter the item name:" << endl;
    // Take user input
    getline(cin,item);

    // Get item price input and store in userPriceInput;
    cout << "Enter the item price:" << endl;

    cin >> userPriceInput;

    // Get item quantity and store in userItemQuantity;
    cout << "Enter the item quantity:" << endl;
    cout << "" << endl;

    cin >> userItemQuantity;
    // Create object 1
    ItemToPurchase obj1;
    // Set item price to method using SetName(); function
    obj1.SetName(item);
    // Set item quantity using SetPrice(); function
    obj1.SetPrice(userItemQuantity);
    // set itemQuantity using SetQuantity() function.
    obj1.SetQuantity(userItemQuantity);

    // Handle memory buffer commands. Not sure which one does what but should clear memory.
    cin.clear();
    cin.ignore (numeric_limits<std::streamsize>::max(), '\n');

    // START of second item
    cout << "Item 2" << endl;

    cout << "Enter the item name:" << endl;
    // Take user input
    getline(cin,item2);

    cout << "Enter the item price:" << endl;

    cin >> userPriceInput2;

    cout << "Enter the item quantity:" << endl;
    cout << "" << endl;

    cin >> userItemQuantity2;

    ItemToPurchase obj2;

    // Set userItemInput using the SetName() function;
    obj2.SetName(item2);

    // Set userPriceInput2 using SetPrice() function;
    obj2.SetPrice(userPriceInput2);

    // Set item quantity using SetQuantity function;
    obj2.SetQuantity(userItemQuantity2);

    // Calculations
    int priceCalculator = userPriceInput * userItemQuantity;
    int priceCalculator2 = userPriceInput2 * userItemQuantity2;

    cout << "TOTAL COST" << endl;
    cout << obj1.GetName() << " " << obj1.GetQuantity() << " @ " << "$" << userPriceInput << " = " << "$" << priceCalculator << endl;
    cout << obj2.GetName() << " " << obj2.GetQuantity() << " @ " << "$" << obj2.GetPrice()  << " = " << "$" << priceCalculator2 << endl;

    cout << "" << endl;

    int total = priceCalculator + priceCalculator2;
    cout << "Total: $" << total << endl;
    return 0;

}