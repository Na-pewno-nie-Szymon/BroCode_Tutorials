#include <iostream>

void info(const std::string name, const int age);

int main(){
    // const parameter = parameter that is effectively read-only
    //                   code is more secure and conveys intent
    //                   useful for references and pointers

    std::string name = "Szymon";
    int age = 21;

    return 0;
}

void info(const std::string name, const int age){
    // name = ' ';
    // age = 0;
    // This will not work because the parameters are const


    std::cout << "Name: " << name << '\n';
    std::cout << "Age: " << age << '\n';
}