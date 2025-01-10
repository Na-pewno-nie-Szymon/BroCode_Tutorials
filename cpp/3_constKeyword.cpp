#include <iostream>

int main(){
    const double PI = 3.14159;
    // PI = 420.69; // This will cause an error
    const int LIGHT_SPEED = 299792458;
    const int WIGHT = 200;
    const int HEIGHT = 100;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm\n";

    return 0;
}