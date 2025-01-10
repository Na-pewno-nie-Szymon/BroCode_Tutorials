#include <iostream>

void NotWorkingSwap(std::string x, std::string y);
void WorkingSwap(std::string &x, std::string &y);
void MemoryAdresses(std::string x, std::string y);

int main(){
    std::string x = "Water";
    std::string y = "Coca-Cola";
    std::string temp;

    temp = x;
    x = y;
    y = temp;

    std::cout << "******************\n";
    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';
    std::cout << "******************\n";

    NotWorkingSwap(x, y);

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';
    std::cout << "******************\n";

    WorkingSwap(x, y);

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';
    std::cout << "******************\n";


    std::cout << "\n******************\n";
    MemoryAdresses(x, y);
    std::cout << "******************\n";
    std::cout << "The memory adress of x ("<< x <<")\t\t is: \t" << &x << '\n';
    std::cout << "The memory adress of y ("<< y <<")\t is: \t" << &y << '\n';

    return 0;
}

void MemoryAdresses(std::string x, std::string y){
    std::cout << "The memory adress of x ("<< x <<")\t\t is: \t" << &x << '\n';
    std::cout << "The memory adress of y ("<< y <<")\t is: \t" << &y << '\n';
}

void WorkingSwap(std::string &x, std::string &y){
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}

void NotWorkingSwap(std::string x, std::string y){
    std::string temp;

    temp = x;
    x = y;
    y = temp;

}