#ifndef H_BANK_ACCOUNT
#define H_BANK_ACCOUNT
#include <iostream>

class BankAccount {
    private:
        float balance = 0;

    public:
        void add_balance(float added_balance);
        float get_balance();
};

#endif