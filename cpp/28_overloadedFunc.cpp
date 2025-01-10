#include <iostream>

void bakePizza();
void bakePizza(std::string topping);
void bakePizza(std::string topping, std::string size);

int main(){

    bakePizza();

    return 0;
}

void bakePizza(){
    std::cout << "Here is your baked pizza!\n";
}

void bakePizza(std::string topping){
    std::cout << "Here is your baked " << topping << " pizza!\n";
}

void bakePizza(std::string topping, std::string size){
    std::cout << "Here is your baked " << size << " " << topping << " pizza!\n";
}