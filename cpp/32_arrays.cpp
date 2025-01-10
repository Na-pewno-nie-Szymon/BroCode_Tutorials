#include <iostream>

int main(){
    std::string garage[] = {"Audi", "BMW", "Mercedes", "Volkswagen", "Toyota"};
    garage[0] = "Ford";

    std::cout << garage[0] << '\n';
    std::cout << garage[1] << '\n';
    std::cout << garage[2] << '\n';
    std::cout << garage[3] << '\n';
    std::cout << garage[4] << '\n';


    std::cout << "-------------------\n";
    double prices[3];
    prices[0] = 10000.0;
    prices[1] = 20000.0;
    prices[2] = 30000.0;

    std::cout << prices[0] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';



    return 0;
}