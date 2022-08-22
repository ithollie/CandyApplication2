#include <string>
#include <iostream>
#include <sqlite3.h>
#include "cashRegister.h"
#include "DespenerType.h"

class Run {

    public:

       

        void start();

        void showSelection();

        void sellProduct(DispenserType& product, CashRegister& pCounter);


};
