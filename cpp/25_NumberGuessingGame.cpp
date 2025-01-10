#include <iostream>
#include <ctime>

int main(){
    int num;
    int guess;
    int tries = 0;

    srand(time(0));
    num = (rand() % 100) + 1;

    std::cout << "Welcome to the Number Guessing Game!\n";

    do{
        std::cout << "Enter a number between 1 and 100: ";
        std::cin >> guess;
        tries++;

        if (guess > num){
            std::cout << "Too high!\n";
        } else if (guess < num){
            std::cout << "Too low!\n";
        } else {
            std::cout << "Congratulations! You guessed the number in " << tries << " tries!\n";
        }
    }while (guess != num); 

    std::cout << "Thank you for playing!\n";

    return 0;
}