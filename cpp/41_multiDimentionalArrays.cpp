#include <iostream>

int main(){

    std::string cars[3][4] = {
        {"Mustang", "Escape", "F150", "GT"},
        {"Silvia", "GTR", "Note", "350Z"},
        {"Civic", "S2000", "Accord", "Mazda"}
    };

    std::cout << cars[0][0] << '\n';
    std::cout << cars[1][1] << '\n';
    std::cout << cars[2][2] << '\n';

    int rows = sizeof(cars) / sizeof(cars[0]);
    int cols = sizeof(cars[0]) / sizeof(cars[0][0]);

    for (int row = 0; row < rows; row++){
        for (int col = 0; col < cols; col++){
            std::cout << cars[row][col] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}