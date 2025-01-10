#include <iostream>

int main(){
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 100){
        std::cout << "You are a centenarian\n";
    }
    else if (age < 0){
        std::cout << "You are not born yet\n";
    }
    else if (age >= 18){
        std::cout << "You are an adult\n";
    } 
    else {
        std::cout << "You are a minor\n";
    }

    return 0;
}