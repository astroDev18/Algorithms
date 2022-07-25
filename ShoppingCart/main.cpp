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
    ItemToPurchase items;
    ItemToPurchase items2;

    string userItemInput;
    string userItemInput2;
    int userPriceInput;
    int userPriceInput2;

    int userItemQuantity;
    int userItemQuantity2;

    string item, price;
    string item2, price2;



    cout << "Item 1" << endl;

    cout << "Enter the item name:" << endl;
    // Take user input
    getline(cin,item);
    cin.clear();

    // clears buffer
    cin.ignore (numeric_limits<std::streamsize>::max(), '\n');
    // magic
    cin.sync();
    // stores into setter function
    items.SetName(userItemInput);

    cout << "Enter the item price:" << endl;

    cin >> userPriceInput;

    items.SetPrice(userPriceInput);

    cout << "Enter the item quantity:" << endl;
    cout << "" << endl;

    cin >> userItemQuantity;

    items.SetQuantity(userItemQuantity);


    cout << "Item 2" << endl;

    cout << "Enter the item name:" << endl;
    // Take user input
    getline(cin,item2);
    cin.clear();

    // clears buffer
    cin.ignore (numeric_limits<std::streamsize>::max(), '\n');
    // magic
    cin.sync();
    // stores into setter function
    items2.SetName(item2);

    cout << "Enter the item price:" << endl;

    cin >> userPriceInput2;

    items2.SetPrice(userPriceInput2);

    cout << "Enter the item quantity:" << endl;
    cout << "" << endl;

    cin >> userItemQuantity2;

    items2.SetQuantity(userItemQuantity2);



    int priceCalculator = userPriceInput * userItemQuantity;
    int priceCalculator2 = userPriceInput2 * userItemQuantity2;
    cout << "TOTAL COST" << endl;
    cout << item << " " << userItemQuantity << " @ " << "$" << userPriceInput << " = " << "$" << priceCalculator << endl;
    cout << item2 << " " << userItemQuantity2 << " @ " << " $" << userPriceInput2 << " = " << " $" << priceCalculator2 << endl;

    int total = priceCalculator + priceCalculator2;
    cout << "Total: $" << total << endl;
    return 0;

}