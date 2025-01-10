#include <iostream>


int main(){
    std::string foods[3];
    int size = sizeof(foods) / sizeof(foods[0]);

    for (int i = 0; i < size; i++){
        std::string food;
        std::cout << "Enter a food you like or 'q' to exit! #" << i + 1 << ": ";
        std::getline(std::cin >> std::ws, food);
        if (food == "q"){
            break;
        } else {
            foods[i] = food;
        }
    }

    std::cout << "You like the following foods:\n";

    for (int i = 0; !foods[i].empty(); i++){
        std::cout << foods[i] << '\n';
    }



    return 0;
}