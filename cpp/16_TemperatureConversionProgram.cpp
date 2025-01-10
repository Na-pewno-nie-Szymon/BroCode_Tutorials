#include <iostream>

int main(){

    double temp;
    char unit;

    std::cout << "*******TEMPRETURE CONVERSION PROGRAM*******\n";
    std::cout << "F - Fahrenheit to Celsius\n";
    std::cout << "C - Celsius to Fahrenheit\n";
    std::cout << "Enter the unit you want to convert: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;
        temp = (temp - 32) * 5 / 9;
        std::cout << "The temperature in Celsius is: " << temp << '\n';
    }
    else if (unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;
        temp = (temp * 9 / 5) + 32;
        std::cout << "The temperature in Fahrenheit is: " << temp << '\n';
    }
    else {
        std::cout << "Invalid unit\n";
    }

    std::cout << "********************************************\n";

    return 0;
}