#include <iostream>
#include <cmath>

int main(){
    double a, b, c;
    std::cout << "Enter the length of the two shorter sides of a right triangle: ";
    std::cin >> a >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "The length of the hypotenuse is: " << c << '\n';

    return 0;
}