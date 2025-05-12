#include <iostream>
#include "BankAccount.h"

int main() {
    BankAccount account;

    bool loop = true;
    int action = 0;
    while(loop) {
        std::cout << "Choose action: \n1. Tambah saldo\n2. Tarik saldo" << std::endl;
        std::cin >> action;

        switch(action) {
            case 1:
                int deposit = 0;
                std::cout << "Masukkan nominal untuk deposit: ";
                std::cin >> deposit;
                account.add_balance(deposit);
                std::cout << "Balance is now " << account.get_balance() << std::endl;
            case 2:
                int withdraw = 0;
                std::cout << "Masukkan nominal untuk ditarik: ";
                std::cin >> withdraw;
                account.add_balance(-withdraw);
                std::cout << "Balance is now " << account.get_balance() << std::endl;
        }
        
        action = 0;
    }
    
    return 0;
}