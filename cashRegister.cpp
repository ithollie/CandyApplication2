#include "cashRegister.h"
#include <string>
#include <iostream>
#include <sqlite3.h>
#include "Login.h"

int cashOnHand;

CashRegister::CashRegister() {

     cashOnHand = 500;
 }

CashRegister::CashRegister(int   cashIn) {
            
       this->cashOnHand = cashIn;
}

int CashRegister::getCurrentBalance() {

       return  cashOnHand;
}

void CashRegister::acceptAmount(int amountIn) {

       this->cashOnHand = cashOnHand + amountIn;
}
