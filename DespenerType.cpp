#include "DespenerType.h"

DispenserType::DispenserType() {

    this->numberOfItems = 50;

    this->cost = 2;
}

DispenserType::DispenserType(int setCost, int setNoOfItems) {

    this->cost = setCost;

    this->numberOfItems = setNoOfItems;
}

int DispenserType::getNoOfItems() {

    return  numberOfItems;
}

int DispenserType::getCost() {

    return   cost;
}

void DispenserType::makeSale() {

    numberOfItems--;

}