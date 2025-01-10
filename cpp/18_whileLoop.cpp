#include <iostream>

int main(){

    std::string name;

    while (name.empty()){
        std::cout << "Enter your full name: ";
        std::getline(std::cin >> std::ws, name);
    }

    std::cout << "Hello " << name << '\n';

    return 0;
}