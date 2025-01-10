#include <iostream>
#include <cmath>

int main(){
    double x = 3;
    double y = 4;
    double z;

    z = std::max(x, y);
    z = std::min(x, y);
    z = pow(2, 3);
    z = sqrt(16);
    z = abs(-4);
    z = round(4.5);
    z = ceil(4.1);
    z = floor(4.9);

    return 0;
}