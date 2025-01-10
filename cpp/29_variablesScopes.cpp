#include <iostream>

int myGlobalNum = 420;

void printNum(int myNum);

int main(){
    int myNum = 5;

    std::cout << myNum << '\n';
    std::cout << myGlobalNum << '\n';

    return 0;
}

void printNum(int myNum){
    std::cout << myNum << '\n';
    std::cout << myGlobalNum << '\n';
}