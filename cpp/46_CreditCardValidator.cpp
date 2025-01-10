#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);


int main(){
    /*
        Luhn Algorithm
        --------------------
        1. Double every second digit from right to left
           If doubled number is 2 digits, split them
        2. Add all digits from step one
        3. Add all odd numbered digits from right to left
        4. Sum results from step 2 and 3
        5. If sum from step 4 is divisible by 10, # is valid
    */

    std::string cardNumber;
    int result = 0;
    
    std::cout << "Enter a credit card number: ";
    std::cin >> cardNumber;

    result = sumOddDigits(cardNumber) + sumEvenDigits(cardNumber);

    if (result % 10 == 0){
        std::cout << "Valid\n";
    } else {
        std::cout << "Invalid\n";
    }

    return 0;
}

int getDigit(const int number){
    return number / 10 + number % 10;
}
int sumOddDigits(const std::string cardNumber){
    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0; i -= 2){
        sum += cardNumber[i] - '0';
    }

    return sum;
}

int sumEvenDigits(const std::string cardNumber){
    int sum = 0;

    for (int i = cardNumber.size() - 2; i >= 0; i -= 2){
        sum += getDigit((cardNumber[i]  - '0') * 2);
    }

    return sum;
}
