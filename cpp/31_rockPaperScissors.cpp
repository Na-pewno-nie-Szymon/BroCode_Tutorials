#include <iostream>
#include <ctime>

bool playAgain(){
    char choice;
    std::cout << "Do you want to play again? (Y/N)\n";
    std::cin >> choice;
    if (choice == 'Y' || choice == 'y'){
        return true;
    } else {
        return false;
    }
}

char getUserChoice(){
    char choice;
    do{
        std::cout << "Enter R for rock, P for paper, or S for scissors\n";
        std::cout << "Your choice: ";
        std::cin >> choice;
    }while(choice != 'R' && choice != 'r' && choice != 'P' && choice != 'p' && choice != 'S' && choice != 's');
    return choice;
}

char getComputerChoice(){
    int choice = rand() % 3;
    switch (choice){
    case 0:
        return 'R';
    case 1:
        return 'P';
    case 2:
        return 'S';
    }
    return 'E';
}

int determineResult(char player, char computer){
    if (player == computer){
        return 0;
    } else if ((player == 'R' || player == 'r')&& (computer == 'S' || computer == 's')){
        return 1;
    } else if ((player == 'S' || player == 's') && (computer == 'P' || computer == 'p')){
        return 1;
    } else if ((player == 'P' || player == 'p') && (computer == 'R' || computer == 'r')){
        return 1;
    } else {
        return -1;
    }
}

int main(){

    srand(time(0));

    std::cout << "****************************ROCK PAPER SCISSORS****************************\n\n";
    char playerChoice;
    char computerChoice;
    int result;
    bool play = true;

    while (play){
        playerChoice = getUserChoice();
        computerChoice = getComputerChoice();
        if (computerChoice == 'E'){
            std::cerr << "Random choice error!\n";
            break;
        }
        else{
            std::cout << "Computer choice: " << computerChoice << '\n';
        }
        result = determineResult(playerChoice, computerChoice);

        if (result == 0){
            std::cout << "It's a tie!\n";
        } else if (result == 1){
            std::cout << "You win!\n";
            play = playAgain();
        } else {
            std::cout << "You lose!\n";
            play = playAgain();
        }
    }
    return 0;
}