
#include <string>
#include <iostream>
#include "cashRegister.h"
#include "DespenerType.h"
#include "Run.h"
#include <sqlite3.h>
#include "Login.h"

using namespace  std;


void Run::start() {

    std::cout << "Thank  you  for  login" << endl;

    CashRegister cashRegister;

    DispenserType  candy(100, 50);
    DispenserType  chips(100, 65);
    DispenserType  gum(75, 65);
    DispenserType  cookies(50, 85);

    showSelection();

    int  choice;

    while (choice != 5) {

        switch (choice) {

        case 1:
            sellProduct(candy, cashRegister);
            break;

        case 2:
            sellProduct(chips, cashRegister);
            break;

        case 3:
            sellProduct(gum, cashRegister);
            break;
        case 4:
            sellProduct(cookies, cashRegister);
            break;
        default:
            cout << "Invalid selection ." << endl;
        }

        showSelection();

        cin >> choice;
    }

}

//cash dispense Type  implementation  class ends
void Run::showSelection() {

    cout << "Welcome  to  our  shop: " << endl;
    cout << "To select  an  item ,  enter " << endl;
    cout << "1 for  candy" << endl;
    cout << "2 for  chips" << endl;
    cout << "3 for  gum " << endl;
    cout << "4 for  cookies " << endl;
    cout << "5 for  exit " << endl;
}

void Run::sellProduct(DispenserType& product , CashRegister& pCounter) {

    int amount;
    int amount2;

   
    if (product.getNoOfItems() > 0) {

        cout << "Please  deposit " << product.getCost() << " cents" << endl;
        cin >> amount;

        if (amount < product.getCost()) {

            cout << "please  deposit  another " << product.getCost() - amount << "  cents" << endl;
        }

        if (amount >= product.getCost()) {

            pCounter.acceptAmount(amount);

            cout << "Collect  your item at  the  bottom  and  enjoy" << endl;

        }
        else {

            cout << "The  amount  is not   enough " << endl;
            cout << "*************************************" << endl;

        }

    }
    else {

        cout << " Sorry  ,  no  items  to  select  from " << endl;

    }
}