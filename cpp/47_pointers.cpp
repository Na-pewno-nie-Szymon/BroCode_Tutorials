#include <iostream>

int main(){
    // pointer  = a variable that stores the memory adress as its value
    //            sometimes it's easier to work with adresses

    // & address-of operator
    // * dereference operator   

    std::string name = "Szymon";
    std::string *pName = &name;

    std::cout << "Name: " << *pName << " at memory adress: " << pName << '\n\n';

    std::string freePizzas[5] = {"Pepperoni", "Hawaiian", "Meat Lovers", "Veggie", "Cheese"};
    std::string *pFreePizzas = freePizzas;

    

    return 0;
}