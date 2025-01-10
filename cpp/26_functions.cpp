#include <iostream>

void happyBirthday(std::string name, int age);

int main(){

    std::string name = "Szymon";
    int age = 21;

    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string name, int age){
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday dear" << name << "!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "You are" << age << " years old!\n";
}