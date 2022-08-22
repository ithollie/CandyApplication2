#include <string>
#include <iostream>

class CashRegister {

    private:

        int cashOnHand;

    public:

        CashRegister();

        CashRegister(int cashIn);

        int  getCurrentBalance();

        void  acceptAmount(int amountIn);

};