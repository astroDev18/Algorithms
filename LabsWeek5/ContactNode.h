//
// Created by Isa Ali on 8/3/22.
//

using namespace std;
#include <string>
#include <iostream>
class ContactNode{
public:
     ContactNode(string inputName, string inputPhoneNumber);

    void InsertAfter(ContactNode* nodePTR);

    string GetName();

    string GetPhoneNumber();

    ContactNode* GetNext();

    void PrintContactNode();

private:
    string contactName;
    string contactPhoneNumber;
    ContactNode* nextNodePtr;
};

// Initial constructor with user input parameters
ContactNode::ContactNode(string inputName, string inputPhoneNumber) {
    this->contactName = std::move(inputName);
    this->contactPhoneNumber = std::move(inputPhoneNumber);
    this->nextNodePtr = nullptr;
}

// Insert method that inserts after a given node
void ContactNode::InsertAfter(ContactNode *nodePTR) {
    ContactNode* oldNext = this->nextNodePtr;
    nodePTR->nextNodePtr = oldNext;
    this->nextNodePtr = nodePTR;
}

// Getter functions for current node's name
string ContactNode::GetName() {
    return contactName;
}

// Getter for current node's phone number
string ContactNode::GetPhoneNumber() {
    return contactPhoneNumber;
}

// Getter for next node
ContactNode* ContactNode::GetNext() {
    return nextNodePtr;
}

// Print function
void ContactNode::PrintContactNode() {
    cout << "Name: " << GetName() << endl;
    cout << "Phone number: " << GetPhoneNumber();
}
