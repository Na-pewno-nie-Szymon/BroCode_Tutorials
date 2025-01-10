#include <iostream>

int main(){
    int x = 3.14;
    std::cout << x << '\n'; // Output: 3

    double y = 3.14;
    std::cout << y << '\n'; // Output: 3.14

    double z = (int) 3.14;
    std::cout << z << '\n'; // Output: 3

    char a = 100;
    std::cout << a << '\n'; // Output: d | ASCII value of 100 is 'd'
    
    int correct = 8;
    int questions = 10;
    double score = (double) correct / questions * 100;

    std::cout << "You scored " << score << "% on the test\n";   

    return 0;
}