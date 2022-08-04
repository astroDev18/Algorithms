//
// Created by Isa Ali on 8/3/22.
//

#include <iostream>
using namespace std;
#include "ContactNode.h"

int main() {

    cout << "Person 1" << endl;
    string inputName1;
    string inputPhone1;
    cout << "Enter name:" << endl;
    getline(cin, inputName1); //cin >> givenName1;
    cout << "Enter phone number:" << endl;
    getline(cin, inputPhone1); // cin >> givenPhone1;
    cout << "You entered: " << inputName1 << ", " << inputPhone1 << endl;
    auto *node1 = new ContactNode(inputName1, inputPhone1);
    cout << endl;


    cout << "Person 2" << endl;
    string inputName2;
    string inputPhone2;
    cout << "Enter name:" << endl;
    getline(cin, inputName2); //cin >> givenName1;
    cout << "Enter phone number:" << endl;
    getline(cin, inputPhone2); // cin >> givenPhone1;
    cout << "You entered: " << inputName2 << ", " << inputPhone2 << endl;
    ContactNode *node2 = new ContactNode(inputName2, inputPhone2);
    cout << endl;


    cout << "Person 3" << endl;
    string inputName3;
    string inputPhone3;
    cout << "Enter name:" << endl;
    getline(cin, inputName3); //cin >> givenName1;
    cout << "Enter phone number:" << endl;
    getline(cin, inputPhone3); // cin >> givenPhone1;
    cout << "You entered: " << inputName3 << ", " << inputPhone3 << endl;
    ContactNode *node3 = new ContactNode(inputName3, inputPhone3);
    cout << endl;

    cout << "CONTACT LIST" << endl;
    cout << "Name: " << node1->GetName() << endl;
    cout << "Phone number: " << node1->GetPhoneNumber() << endl;
    cout << endl;

    cout << "Name: " << node2->GetName() << endl;
    cout << "Phone number: " << node2->GetPhoneNumber() << endl;
    cout << endl;

    cout << "Name: " << node3->GetName() << endl;
    cout << "Phone number: " << node3->GetPhoneNumber() << endl;
    cout << endl;

    return 0;
}