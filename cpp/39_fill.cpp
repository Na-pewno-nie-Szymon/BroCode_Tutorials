#include <iostream>


int main(){
    std::string foods[] = {"pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza"};

    for (std::string food : foods){
        std::cout << food << '\n';
    }

    std::cout << "\n";

    const int SIZE = 9;
    std::string cars[SIZE];

    fill(cars, cars + SIZE/3, "Nissan");
    fill(cars + SIZE/3, cars + (2*SIZE/3), "Toyota");
    fill(cars + (2 * SIZE / 3), cars + SIZE, "Ford");

    for (std::string car : cars){
        std::cout << car << '\n';
    }

    return 0;
}