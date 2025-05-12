#include "./BankAccount.h"

void BankAccount::add_balance(float added_balance) {
    if(balance+added_balance>=0) {
        balance += added_balance;
    } else {
        std::cerr << "Not enough balance in account." << std::endl;
    }
}

float BankAccount::get_balance() {
    return balance;
}