#include <iostream>

void printNumbers(){
    int rows;
    int collumns;
    char symbol;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of collumns: ";
    std::cin >> collumns;
    std::cout << "Enter the symbol: ";
    std::cin >> symbol;

    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= collumns; j++){
            std::cout << symbol << ' ';
        }
        std::cout << '\n';
    }
}

int main(){

    for (int i = 1; i <= 3; i ++){
        for (int j = 1; j <= 10; j++){
            std::cout << j << ' ';
        }
        std::cout << '\n';
    }
    for (int i = 1; i <= 10; i++){
        std::cout << i << ' ';
    }

    printNumbers();

    return 0;
}