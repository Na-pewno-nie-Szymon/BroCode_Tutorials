#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){

    double balance = 0.0;
    int choice = 0;

    do {
        std::cout << "1. Show balance\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdraw\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch (choice){
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance = withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thank you for using our banking program\n";
            break;
        default:
            std::cout << "Invalid choice\n";
            break;
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance){
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
}

double deposit(){
    double amount;
    std::cout << "Enter the amount you want to deposit: ";
    std::cin >> amount;

    if (amount < 0){
        std::cout << "Invalid amount\n";
        return 0;
    }else{
        return amount;
    }
}

double withdraw(double balance){
    double amount;
    std::cout << "Enter the amount you want to withdraw: ";
    std::cin >> amount;
    if (amount < 0){
        std::cout << "Invalid amount\n";
        return balance;
    } else if (amount > balance){
        std::cout << "Insufficient funds\n";
        return balance;
    } else {
        return balance - amount;
    }
}
