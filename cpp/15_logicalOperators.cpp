#include <iostream>

int main(){
    int temp;
    std::cout << "Enter the temperature: ";
    std::cin >> temp;
    bool sunny = true;

    if (temp > 0 && temp < 30){
        std::cout << "the temperature is good!\n";
    }
    else {
        std::cout << "the temperature is bad!\n";
    }

    if (temp < 0 || temp > 30){
        std::cout << "the temperature is bad!\n";
    }
    else {
        std::cout << "the temperature is good!\n";
    }

    if (sunny){
        std::cout << "It's sunny\n";
    }
    else {
        std::cout << "It's not sunny\n";
    }

    if (!sunny){
        std::cout << "It's not sunny\n";
    }
    else {
        std::cout << "It's sunny\n";
    }
    return 0;
}