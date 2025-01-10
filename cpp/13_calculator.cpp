#include <iostream>

int main(){
    char op;
    double num1, num2;
    double result;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the operator: ";
    std::cin >> op;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        std::cout << "Invalid operator\n";
        break;
    }
    std::cout << "The result is: " << result << '\n';
}