#include <iostream>

int main(){

    std::string questions[5] = {
        "What is the capital of France?",
        "What is the capital of Japan?",
        "What is the capital of Spain?",
        "What is the capital of Italy?",
        "What is the capital of Germany?"
    };

    std::string options[5][4] = {
        {"A. Paris", "B. London", "C. Rome", "D. Madrid"},
        {"A. Tokyo", "B. Beijing", "C. Seoul", "D. Bangkok"},
        {"A. Madrid", "B. Paris", "C. Rome", "D. Berlin"},
        {"A. Paris", "B. London", "C. Rome", "D. Madrid"},
        {"A. Berlin", "B. Paris", "C. Rome", "D. Madrid"}
    };

    char answers[5] = {'A', 'A', 'A', 'C', 'A'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

    for (int i = 0; i < size; i++){
        std::cout << "********************************\n";
        std::cout << questions[i] << '\n';
        std::cout << "********************************\n";

        for (int j = 0; j < 4; j++){
            std::cout << options[i][j] << '\n';
        }

        std::cout << "\nEnter your answer: ";
        std::cin >> guess;
        guess = toupper(guess);

        if (answers[i] == guess){
            score++;
        }
    }

    std::cout << "You scored " << score << "/" << size << '\n';
    std::cout << (score/(double)size) * 100 << "% Congratulations!\n";

    return 0;
}