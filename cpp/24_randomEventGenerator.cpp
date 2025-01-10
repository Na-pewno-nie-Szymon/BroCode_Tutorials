#include <iostream>
#include <ctime>

int main(){
    srand(time(0));
    int randNum = (rand() % 5) + 1;
    
    switch (randNum)
    {
    case 1:
        std::cout << "You won a car!\n";
        break;
    case 2:
        std::cout << "You won a boat!\n";
        break;
    case 3:
        std::cout << "You won a house!\n";
        break;
    case 4:
        std::cout << "You won a vacation!\n";
        break;
    case 5:
        std::cout << "You won a million dollars!\n";
        break;    
    default:
        break;
    }

    return 0;
}