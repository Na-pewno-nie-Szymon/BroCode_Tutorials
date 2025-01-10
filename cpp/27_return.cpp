#include <iostream>

double square(double length);

int main(){
    double length = 5.0;
    double area = square(length);

    std::cout << "The area of a square with side length " << length << " is " << area << '\n';

    return 0;
}

double square(double length){
    return length * length;
}
