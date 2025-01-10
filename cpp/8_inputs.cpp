#include <iostream>

int main(){
    std::string name;
    std::cout << "Enter your full name: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello " << name << '\n';

    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "You are " << age << " years old\n";

    return 0;
}