#include "cashRegister.h"
#include "Registration.h"
#include  <string>
#include <iostream>

class  DispenserType {

private:

    int numberOfItems;

    int cost;

public:

    DispenserType();

    DispenserType(int setCost, int numberOfItems);

    int getNoOfItems();

    int getCost();

    void makeSale();
};

