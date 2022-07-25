//
// Created by isaja on 7/25/2022.
//
#include "ItemToPurchase.h"

#include <utility>
void ItemToPurchase::SetName(string itemNameValue) {
    itemName = std::move(itemNameValue);
}

string ItemToPurchase::GetName() {
    return itemName;
}

int ItemToPurchase::SetPrice(int itemPriceValue) {
    itemPrice = itemPriceValue;
}

int ItemToPurchase::GetPrice() const {
    return itemPrice;
}

void ItemToPurchase::SetQuantity(int itemQuantityValue) {
    itemQuantity = itemQuantityValue;
}

int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
}



